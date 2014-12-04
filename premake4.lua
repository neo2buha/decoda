include "qt.lua"
local qt = premake.extensions.qt


solution "Decoda"
    configurations { "Debug", "Release" }
     location "prj"
	--debugdir "working"
	flags { "No64BitChecks" }
    
	defines { "_CRT_SECURE_NO_WARNINGS", "WIN32" }
    
    vpaths { 
        ["Header Files"] = { "**.h" },
        ["Source Files"] = { "**.cpp" },
		["Resource Files"] = { "**.rc" },
    }

project "QtFrontEnd"
		  	kind "ConsoleApp"
			targetname "DecodaQt"
			flags { "WinMain" }
		    location "prj"
		    language "C++"
		    targetdir "binQt"
			--
			-- setup your project's configuration here ...
			--

			-- add the files
			files { "src/FrontendQt/**.*"}
			--
			-- Enable Qt for this project.
			--
			qt.enable()
			qtgenerateddir("prj/GeneratedFiles")
			--
			-- Setup the Qt path. This apply to the current configuration, so
			-- if you handle x32 and x64, you can specify a different path
			-- for both configurations.
			--
			-- Note that if this is ommited, the addon will try to look for the
			-- QTDIR environment variable. If it's not found, then the script
			-- will return an error since it won't be able to find the path
			-- to your Qt installation.
			--
			qtpath "h:/Work/Qt/Qt5.4.0/5.4/msvc2013_opengl/"

			--
			-- Setup which Qt modules will be used. This also apply to the
			-- current configuration, so can you choose to deactivate a module
			-- for a specific configuration.
			--
			qtmodules { "core", "gui", "widgets", "opengl" }

			--
			-- Setup the prefix of the Qt libraries. Usually it's Qt4 for Qt 4.x
			-- versions and Qt5 for Qt 5.x ones. Again, this apply to the current
			-- configuration. So if you want to have a configuration which uses
			-- Qt4 and one that uses Qt5, you can do it.
			--
			qtprefix "Qt5"

			--
			-- Setup the suffix for the Qt libraries. The debug versions of the
			-- Qt libraries usually have a "d" suffix. If you compiled your own
			-- version, you could also have suffixes for x64 libraries, etc.
			--
			configuration { "Debug" }
				qtsuffix "d"
			configuration { } 

project "Frontend"
    kind "WindowedApp"
	targetname "Decoda"
	flags { "WinMain" }
	forceincludes { "StdAfx.h" }
    location "prj"
    language "C++"
    files {
		"src/Frontend/*.h",
		"src/Frontend/*.cpp",
		"src/Frontend/*.rc",
	}		
    includedirs {
		"src/Shared",
		"libs/wxWidgets/include",
		"libs/wxScintilla/include",
		"libs/Update/include",
	}
	libdirs {
		"libs/wxWidgets/lib/vc_lib",
		"libs/wxScintilla/lib",
		"libs/Update/lib",
	}
    links {
		"comctl32",
		"rpcrt4",
		"imagehlp",
		"Update",
		"Shared",		
	}

	pchheader "StdAfx.h"
	pchsource "src/FrontEnd/StdAfx.cpp"
	
    configuration "Debug"
        defines { "DEBUG" }
        flags { "Symbols" }
        targetdir "bin/debug"
		includedirs { "libs/wxWidgets/lib/vc_lib/mswd" }
		links {
			"wxbase28d",
			"wxmsw28d_core",
			"wxmsw28d_aui",
			"wxscintillad",
			"wxbase28d_xml",
			"wxexpatd",
			"wxmsw28d_adv",
			"wxmsw28d_qa",
			"wxzlibd",
			"wxmsw28d_richtext",
			"wxmsw28d_html",
			"wxpngd",
		}

    configuration "Release"
        defines { "NDEBUG" }
        flags { "Optimize" }
        targetdir "bin/release"
		includedirs { "libs/wxWidgets/lib/vc_lib/msw" }
		links {
			"wxbase28",
			"wxmsw28_core",
			"wxmsw28_aui",
			"wxscintilla",
			"wxbase28_xml",
			"wxexpat",
			"wxmsw28_adv",
			"wxmsw28_qa",
			"wxzlib",
			"wxmsw28_richtext",
			"wxmsw28_html",
			"wxpng",
		}		
		
project "LuaInject"
    kind "SharedLib"
     location "prj"
    language "C++"
	defines { "TIXML_USE_STL" }
    files {
		"src/LuaInject/*.h",
		"src/LuaInject/*.cpp",
	}		
    includedirs {
		"src/Shared",
		"libs/LuaPlus/include",
		"libs/tinyxml/include",
		"libs/dbghlp/include",
	}
	libdirs {
		"libs/tinyxml/lib",
		"libs/dbghlp/lib",
	}
    links {
		"Shared",
		"psapi"
	}

    configuration "Debug"
        defines { "DEBUG" }
        flags { "Symbols" }
        targetdir "bin/debug"
		links { "tinyxmld_STL" }

    configuration "Release"
        defines { "NDEBUG" }
        flags { "Optimize" }
        targetdir "bin/release"				
		links { "tinyxml_STL" }
		
project "Shared"
    kind "StaticLib"
     location "prj"
    language "C++"
    files {
		"src/Shared/*.h",
		"src/Shared/*.cpp",
	}		
    includedirs {
	}
	libdirs {
	}
    links {
	}

    configuration "Debug"
        defines { "DEBUG" }
        flags { "Symbols" }
        targetdir "bin/debug"

    configuration "Release"
        defines { "NDEBUG" }
        flags { "Optimize" }
        targetdir "bin/release"		
		