/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_AS;
    QAction *actionRecent_Files;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuProject;
    QMenu *menuDebug;
    QMenu *menuSCC;
    QMenu *menuTools;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QDockWidget *ProjectExplorer;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QListView *listView;
    QLabel *label;
    QDockWidget *output;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QDockWidget *breakpoints;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_3;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QTableView *tableView_4;
    QDockWidget *SearchResults;
    QWidget *dockWidgetContents_4;
    QHBoxLayout *horizontalLayout_5;
    QPlainTextEdit *plainTextEdit;
    QDockWidget *watch;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QDockWidget *virtualMachines;
    QWidget *dockWidgetContents_6;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tableView_3;
    QDockWidget *callStack;
    QWidget *dockWidgetContents_7;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(594, 575);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_AS = new QAction(MainWindow);
        actionSave_AS->setObjectName(QStringLiteral("actionSave_AS"));
        actionRecent_Files = new QAction(MainWindow);
        actionRecent_Files->setObjectName(QStringLiteral("actionRecent_Files"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        verticalLayout->addWidget(mdiArea);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 594, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuProject = new QMenu(menubar);
        menuProject->setObjectName(QStringLiteral("menuProject"));
        menuDebug = new QMenu(menubar);
        menuDebug->setObjectName(QStringLiteral("menuDebug"));
        menuSCC = new QMenu(menubar);
        menuSCC->setObjectName(QStringLiteral("menuSCC"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        ProjectExplorer = new QDockWidget(MainWindow);
        ProjectExplorer->setObjectName(QStringLiteral("ProjectExplorer"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        lineEdit = new QLineEdit(dockWidgetContents);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        listView = new QListView(dockWidgetContents);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_2->addWidget(listView);

        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(label);

        ProjectExplorer->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), ProjectExplorer);
        output = new QDockWidget(MainWindow);
        output->setObjectName(QStringLiteral("output"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        textEdit = new QTextEdit(dockWidgetContents_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);

        output->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), output);
        breakpoints = new QDockWidget(MainWindow);
        breakpoints->setObjectName(QStringLiteral("breakpoints"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, 2, 2, 2);
        widget = new QWidget(dockWidgetContents_3);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        toolButton_3 = new QToolButton(widget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));

        horizontalLayout_3->addWidget(toolButton_3);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        horizontalLayout_3->addWidget(toolButton_2);

        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout_3->addWidget(toolButton);


        verticalLayout_4->addWidget(widget);

        tableView_4 = new QTableView(dockWidgetContents_3);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));

        verticalLayout_4->addWidget(tableView_4);

        breakpoints->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), breakpoints);
        SearchResults = new QDockWidget(MainWindow);
        SearchResults->setObjectName(QStringLiteral("SearchResults"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        horizontalLayout_5 = new QHBoxLayout(dockWidgetContents_4);
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        plainTextEdit = new QPlainTextEdit(dockWidgetContents_4);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        horizontalLayout_5->addWidget(plainTextEdit);

        SearchResults->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), SearchResults);
        watch = new QDockWidget(MainWindow);
        watch->setObjectName(QStringLiteral("watch"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        tableView = new QTableView(dockWidgetContents_5);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_3->addWidget(tableView);

        watch->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), watch);
        virtualMachines = new QDockWidget(MainWindow);
        virtualMachines->setObjectName(QStringLiteral("virtualMachines"));
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QStringLiteral("dockWidgetContents_6"));
        horizontalLayout_4 = new QHBoxLayout(dockWidgetContents_6);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        tableView_3 = new QTableView(dockWidgetContents_6);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));

        horizontalLayout_4->addWidget(tableView_3);

        virtualMachines->setWidget(dockWidgetContents_6);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), virtualMachines);
        callStack = new QDockWidget(MainWindow);
        callStack->setObjectName(QStringLiteral("callStack"));
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QStringLiteral("dockWidgetContents_7"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents_7);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        tableView_2 = new QTableView(dockWidgetContents_7);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        horizontalLayout_2->addWidget(tableView_2);

        callStack->setWidget(dockWidgetContents_7);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), callStack);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuProject->menuAction());
        menubar->addAction(menuDebug->menuAction());
        menubar->addAction(menuSCC->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_AS);
        menuFile->addSeparator();
        menuFile->addAction(actionRecent_Files);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNew->setText(QApplication::translate("MainWindow", "&New", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave_AS->setText(QApplication::translate("MainWindow", "Save AS", 0));
        actionRecent_Files->setText(QApplication::translate("MainWindow", "Recent Files", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuProject->setTitle(QApplication::translate("MainWindow", "Project", 0));
        menuDebug->setTitle(QApplication::translate("MainWindow", "Debug", 0));
        menuSCC->setTitle(QApplication::translate("MainWindow", "SCC", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        menuWindow->setTitle(QApplication::translate("MainWindow", "Window", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        ProjectExplorer->setWindowTitle(QApplication::translate("MainWindow", "Project Explorer", 0));
        label->setText(QString());
        output->setWindowTitle(QApplication::translate("MainWindow", "Output", 0));
        breakpoints->setWindowTitle(QApplication::translate("MainWindow", "Breakpoints", 0));
        toolButton_3->setText(QApplication::translate("MainWindow", "...", 0));
        toolButton_2->setText(QApplication::translate("MainWindow", "...", 0));
        toolButton->setText(QApplication::translate("MainWindow", "...", 0));
        SearchResults->setWindowTitle(QApplication::translate("MainWindow", "Search Results", 0));
        watch->setWindowTitle(QApplication::translate("MainWindow", "Watch", 0));
        virtualMachines->setWindowTitle(QApplication::translate("MainWindow", "Virtual Machines", 0));
        callStack->setWindowTitle(QApplication::translate("MainWindow", "CallStack", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
