#include <QApplication>
#include "MainWindow.h"
#include "ui_MainWindow.h"
int main(int argc, char* argv[])
{
	 QApplication app(argc, argv);
     app.setOrganizationName("Trolltech");
     app.setApplicationName("Application Example");
     MainWindow mainWin;

	 Ui::MainWindow ui;
	 ui.setupUi(&mainWin);

 #if defined(Q_OS_SYMBIAN)
     mainWin.showMaximized();
 #else
     mainWin.show();
 #endif
     return app.exec();
}