/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionNew;
    QAction *actionClose;
    QAction *actionRecent;
    QAction *actionSaveAs;
    QAction *actionQuit;
    QAction *actionPrint;
    QAction *actionExport;
    QAction *actionPolygonTool;
    QAction *actionSelectTool;
    QAction *actionPubPointTool;
    QAction *actionPanTool;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionAddFloor;
    QAction *actionAddFuncArea;
    QAction *actionAddPubpoint;
    QAction *actionDelete;
    QAction *actionZoomTool;
    QAction *actionShowShopText;
    QAction *actionFont;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionResetZoom;
    QAction *actionMergeTool;
    QAction *actionSplitTool;
    QAction *actionScaleTool;
    QAction *actionPrintCurrent;
    QAction *actionShowPointText;
    QAction *actionShowDir;
    QAction *actionFindRepeat;
    QAction *actionRotate;
    QAction *actionFlip;
    QAction *actionFind;
    QAction *actionSortAreas;
    QAction *actionShowAreaSort;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *action_3;
    QAction *actionEnglish;
    QAction *action_4;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolToolBar;
    QDockWidget *dockTreeWidget;
    QWidget *dockTreeWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *addLayerButton;
    QPushButton *deleteButton;
    QDockWidget *dockPropertyWidget;
    QWidget *dockPropWidgetContents;
    QDockWidget *dockOutputWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(895, 566);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/icon/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/src/icon/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/src/icon/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/src/icon/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon3);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionRecent = new QAction(MainWindow);
        actionRecent->setObjectName(QString::fromUtf8("actionRecent"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/src/icon/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionPolygonTool = new QAction(MainWindow);
        actionPolygonTool->setObjectName(QString::fromUtf8("actionPolygonTool"));
        actionPolygonTool->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/src/icon/polygon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPolygonTool->setIcon(icon5);
        actionSelectTool = new QAction(MainWindow);
        actionSelectTool->setObjectName(QString::fromUtf8("actionSelectTool"));
        actionSelectTool->setCheckable(true);
        actionSelectTool->setChecked(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/src/icon/select.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectTool->setIcon(icon6);
        actionPubPointTool = new QAction(MainWindow);
        actionPubPointTool->setObjectName(QString::fromUtf8("actionPubPointTool"));
        actionPubPointTool->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/src/icon/pubpoint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPubPointTool->setIcon(icon7);
        actionPanTool = new QAction(MainWindow);
        actionPanTool->setObjectName(QString::fromUtf8("actionPanTool"));
        actionPanTool->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/src/icon/pan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPanTool->setIcon(icon8);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/src/icon/editundo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/src/icon/editredo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon10);
        actionAddFloor = new QAction(MainWindow);
        actionAddFloor->setObjectName(QString::fromUtf8("actionAddFloor"));
        actionAddFuncArea = new QAction(MainWindow);
        actionAddFuncArea->setObjectName(QString::fromUtf8("actionAddFuncArea"));
        actionAddPubpoint = new QAction(MainWindow);
        actionAddPubpoint->setObjectName(QString::fromUtf8("actionAddPubpoint"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionZoomTool = new QAction(MainWindow);
        actionZoomTool->setObjectName(QString::fromUtf8("actionZoomTool"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/src/icon/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomTool->setIcon(icon11);
        actionShowShopText = new QAction(MainWindow);
        actionShowShopText->setObjectName(QString::fromUtf8("actionShowShopText"));
        actionShowShopText->setCheckable(true);
        actionShowShopText->setChecked(true);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/src/icon/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon12);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomIn->setIcon(icon11);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/src/icon/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon13);
        actionResetZoom = new QAction(MainWindow);
        actionResetZoom->setObjectName(QString::fromUtf8("actionResetZoom"));
        actionMergeTool = new QAction(MainWindow);
        actionMergeTool->setObjectName(QString::fromUtf8("actionMergeTool"));
        actionMergeTool->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/src/icon/merge.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMergeTool->setIcon(icon14);
        actionSplitTool = new QAction(MainWindow);
        actionSplitTool->setObjectName(QString::fromUtf8("actionSplitTool"));
        actionSplitTool->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/src/icon/split.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSplitTool->setIcon(icon15);
        actionScaleTool = new QAction(MainWindow);
        actionScaleTool->setObjectName(QString::fromUtf8("actionScaleTool"));
        actionScaleTool->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/src/icon/scale.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScaleTool->setIcon(icon16);
        actionPrintCurrent = new QAction(MainWindow);
        actionPrintCurrent->setObjectName(QString::fromUtf8("actionPrintCurrent"));
        actionPrintCurrent->setIcon(icon4);
        actionShowPointText = new QAction(MainWindow);
        actionShowPointText->setObjectName(QString::fromUtf8("actionShowPointText"));
        actionShowPointText->setCheckable(true);
        actionShowPointText->setChecked(true);
        actionShowDir = new QAction(MainWindow);
        actionShowDir->setObjectName(QString::fromUtf8("actionShowDir"));
        actionShowDir->setCheckable(true);
        actionFindRepeat = new QAction(MainWindow);
        actionFindRepeat->setObjectName(QString::fromUtf8("actionFindRepeat"));
        actionRotate = new QAction(MainWindow);
        actionRotate->setObjectName(QString::fromUtf8("actionRotate"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/src/icon/rotateright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate->setIcon(icon17);
        actionFlip = new QAction(MainWindow);
        actionFlip->setObjectName(QString::fromUtf8("actionFlip"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/src/icon/flip.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFlip->setIcon(icon18);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/src/icon/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon19);
        actionSortAreas = new QAction(MainWindow);
        actionSortAreas->setObjectName(QString::fromUtf8("actionSortAreas"));
        actionShowAreaSort = new QAction(MainWindow);
        actionShowAreaSort->setObjectName(QString::fromUtf8("actionShowAreaSort"));
        actionShowAreaSort->setCheckable(true);
        actionShowAreaSort->setChecked(true);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/src/icon/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon20);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/src/icon/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon21);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/src/icon/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon22);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 895, 23));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menu_4);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolToolBar = new QToolBar(MainWindow);
        toolToolBar->setObjectName(QString::fromUtf8("toolToolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolToolBar);
        dockTreeWidget = new QDockWidget(MainWindow);
        dockTreeWidget->setObjectName(QString::fromUtf8("dockTreeWidget"));
        dockTreeWidgetContents = new QWidget();
        dockTreeWidgetContents->setObjectName(QString::fromUtf8("dockTreeWidgetContents"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockTreeWidgetContents->sizePolicy().hasHeightForWidth());
        dockTreeWidgetContents->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(dockTreeWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addLayerButton = new QPushButton(dockTreeWidgetContents);
        addLayerButton->setObjectName(QString::fromUtf8("addLayerButton"));
        addLayerButton->setMaximumSize(QSize(25, 25));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/src/icon/addlayer.png"), QSize(), QIcon::Normal, QIcon::Off);
        addLayerButton->setIcon(icon23);

        horizontalLayout_2->addWidget(addLayerButton);

        deleteButton = new QPushButton(dockTreeWidgetContents);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMaximumSize(QSize(25, 25));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/src/icon/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon24);

        horizontalLayout_2->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout_2);

        dockTreeWidget->setWidget(dockTreeWidgetContents);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockTreeWidget);
        dockPropertyWidget = new QDockWidget(MainWindow);
        dockPropertyWidget->setObjectName(QString::fromUtf8("dockPropertyWidget"));
        dockPropWidgetContents = new QWidget();
        dockPropWidgetContents->setObjectName(QString::fromUtf8("dockPropWidgetContents"));
        dockPropertyWidget->setWidget(dockPropWidgetContents);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockPropertyWidget);
        dockOutputWidget = new QDockWidget(MainWindow);
        dockOutputWidget->setObjectName(QString::fromUtf8("dockOutputWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockOutputWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockOutputWidget);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menu_File->addAction(actionNew);
        menu_File->addAction(actionOpen);
        menu_File->addAction(actionRecent);
        menu_File->addSeparator();
        menu_File->addAction(actionClose);
        menu_File->addAction(actionSave);
        menu_File->addAction(actionSaveAs);
        menu_File->addSeparator();
        menu_File->addAction(actionPrintCurrent);
        menu_File->addAction(actionPrint);
        menu_File->addSeparator();
        menu->addAction(actionUndo);
        menu->addAction(actionRedo);
        menu->addSeparator();
        menu->addAction(actionCut);
        menu->addAction(actionCopy);
        menu->addAction(actionPaste);
        menu->addSeparator();
        menu->addAction(actionRotate);
        menu->addAction(actionFlip);
        menu->addSeparator();
        menu->addAction(actionFind);
        menu->addAction(actionFindRepeat);
        menu->addSeparator();
        menu->addAction(actionDelete);
        menu_2->addAction(actionShowShopText);
        menu_2->addAction(actionShowPointText);
        menu_2->addAction(actionShowDir);
        menu_2->addAction(actionFont);
        menu_2->addSeparator();
        menu_2->addAction(actionZoomIn);
        menu_2->addAction(actionZoomOut);
        menu_2->addAction(actionResetZoom);
        menu_3->addAction(actionSortAreas);
        menu_4->addSeparator();
        menu_4->addAction(menu_5->menuAction());
        menu_4->addAction(action_4);
        menu_5->addAction(action_3);
        menu_5->addAction(actionEnglish);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionPrint);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFind);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionZoomIn);
        mainToolBar->addAction(actionZoomOut);
        toolToolBar->addAction(actionSelectTool);
        toolToolBar->addSeparator();
        toolToolBar->addAction(actionPolygonTool);
        toolToolBar->addAction(actionPubPointTool);
        toolToolBar->addSeparator();
        toolToolBar->addAction(actionMergeTool);
        toolToolBar->addAction(actionSplitTool);
        toolToolBar->addSeparator();
        toolToolBar->addAction(actionScaleTool);
        toolToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200...", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRecent->setText(QCoreApplication::translate("MainWindow", "\346\234\200\350\277\221\346\211\223\345\274\200\347\232\204\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actionRecent->setToolTip(QCoreApplication::translate("MainWindow", "\346\234\200\350\277\221\346\211\223\345\274\200\347\232\204\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272...", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAs->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actionQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrint->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260...", nullptr));
#if QT_CONFIG(tooltip)
        actionPrint->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExport->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272", nullptr));
        actionPolygonTool->setText(QCoreApplication::translate("MainWindow", "polygonTool", nullptr));
#if QT_CONFIG(tooltip)
        actionPolygonTool->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\272\345\244\232\350\276\271\345\275\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectTool->setText(QCoreApplication::translate("MainWindow", "selectTool", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectTool->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\267\245\345\205\267", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPubPointTool->setText(QCoreApplication::translate("MainWindow", "pubPointTool", nullptr));
#if QT_CONFIG(tooltip)
        actionPubPointTool->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\205\254\345\205\261\350\256\276\346\226\275\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPanTool->setText(QCoreApplication::translate("MainWindow", "panTool", nullptr));
#if QT_CONFIG(tooltip)
        actionPanTool->setToolTip(QCoreApplication::translate("MainWindow", "\345\271\263\347\247\273\345\267\245\345\205\267", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAddFloor->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\245\274\345\261\202", nullptr));
        actionAddFuncArea->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\210\277\351\227\264", nullptr));
        actionAddPubpoint->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\205\254\345\205\261\350\256\276\346\226\275\347\202\271", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomTool->setText(QCoreApplication::translate("MainWindow", "\346\224\276\347\274\251", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomTool->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\346\224\276\345\234\272\346\231\257", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowShopText->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\272\227\351\223\272\345\220\215\347\247\260", nullptr));
#if QT_CONFIG(tooltip)
        actionShowShopText->setToolTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\247\206\345\233\276\344\270\255\347\232\204\345\272\227\351\223\272\345\220\215\347\247\260", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFont->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223...", nullptr));
#if QT_CONFIG(tooltip)
        actionFont->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\247\206\345\233\276\344\270\255\347\232\204\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247\345\234\272\346\231\257", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+=", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217\345\234\272\346\231\257", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResetZoom->setText(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256\347\274\251\346\224\276", nullptr));
#if QT_CONFIG(tooltip)
        actionResetZoom->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256\345\234\272\346\231\257\347\274\251\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMergeTool->setText(QCoreApplication::translate("MainWindow", "\345\220\210\345\271\266\n"
"", nullptr));
#if QT_CONFIG(tooltip)
        actionMergeTool->setToolTip(QCoreApplication::translate("MainWindow", "\345\220\210\345\271\266\345\275\242\347\212\266\345\267\245\345\205\267", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSplitTool->setText(QCoreApplication::translate("MainWindow", "\345\210\206\350\243\202", nullptr));
#if QT_CONFIG(tooltip)
        actionSplitTool->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\206\350\243\202\345\275\242\347\212\266\345\267\245\345\205\267", nullptr));
#endif // QT_CONFIG(tooltip)
        actionScaleTool->setText(QCoreApplication::translate("MainWindow", "\346\257\224\344\276\213\345\260\272", nullptr));
#if QT_CONFIG(tooltip)
        actionScaleTool->setToolTip(QCoreApplication::translate("MainWindow", "\346\257\224\344\276\213\345\260\272\345\267\245\345\205\267", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrintCurrent->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\350\247\206\345\217\243...", nullptr));
#if QT_CONFIG(tooltip)
        actionPrintCurrent->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\345\275\223\345\211\215\350\247\206\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowPointText->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\256\276\346\226\275\347\202\271", nullptr));
        actionShowDir->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\344\270\273\350\275\264\345\220\221", nullptr));
#if QT_CONFIG(tooltip)
        actionShowDir->setToolTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\344\270\273\350\275\264\345\220\221", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFindRepeat->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\237\245\345\220\214\351\223\272", nullptr));
#if QT_CONFIG(tooltip)
        actionFindRepeat->setToolTip(QCoreApplication::translate("MainWindow", "\346\243\200\346\237\245\346\211\200\346\234\211\347\233\270\345\220\214\345\223\201\347\211\214\347\232\204\345\272\227\351\223\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRotate->setText(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254...", nullptr));
#if QT_CONFIG(tooltip)
        actionRotate->setToolTip(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254\345\234\260\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFlip->setText(QCoreApplication::translate("MainWindow", "\345\257\271\347\247\260...", nullptr));
#if QT_CONFIG(tooltip)
        actionFlip->setToolTip(QCoreApplication::translate("MainWindow", "\345\257\271\347\247\260\347\277\273\350\275\254\345\234\260\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFind->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276...", nullptr));
#if QT_CONFIG(tooltip)
        actionFind->setToolTip(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276\345\272\227\351\223\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSortAreas->setText(QCoreApplication::translate("MainWindow", "\351\223\272\344\275\215\345\210\206\347\261\273", nullptr));
        actionShowAreaSort->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\351\223\272\344\275\215\347\261\273\345\210\253", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_3->setText(QCoreApplication::translate("MainWindow", "\347\256\200\344\275\223\344\270\255\346\226\207", nullptr));
        actionEnglish->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216...", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\210\206\346\236\220", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\350\257\255\350\250\200", nullptr));
        toolToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        dockTreeWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\234\272\346\231\257\347\273\223\346\236\204", nullptr));
#if QT_CONFIG(tooltip)
        addLayerButton->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\245\274\345\261\202", nullptr));
#endif // QT_CONFIG(tooltip)
        addLayerButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteButton->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteButton->setText(QString());
        dockPropertyWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\261\236\346\200\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
