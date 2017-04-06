/*
 *	File      : manage_ui_gui_mainwindow.cpp
 *
 *	Created on: 05 Apr, 2017
 *	Author    : Davit Kalantaryan (Email: davit.kalantaryan@desy.de)
 *
 *
 */

#include "manage_ui_gui_mainwindow.hpp"
#include <QMenuBar>

manage::ui::gui::MainWindow::MainWindow()
    :
      m_actionQuit(QIcon(":/img/quit_pik.png"),tr("Close"),this),
      m_actionByColumns(QIcon(":/img/column.png"),tr(""),this)
{
    CreateActions();
    CreateMenus();
}


manage::ui::gui::MainWindow::~MainWindow()
{
    //
}


void manage::ui::gui::MainWindow::CreateActions()
{

    m_actionQuit.setStatusTip( tr("Exit Program") );
    connect( &m_actionQuit, SIGNAL(triggered()), this, SLOT(close()) );

}


void manage::ui::gui::MainWindow::CreateMenus()
{

    QMenu*    pCurMenu;
    QMenuBar* pMenuBar = menuBar();

    pCurMenu = pMenuBar->addMenu( tr("&File") );
    pCurMenu->addAction( &m_actionQuit );
    m_toolBar.addAction(&m_actionQuit);

    m_toolBarLeft.addAction(&m_actionByColumns);

    setCentralWidget(&m_centralWidget);
    addToolBar(&m_toolBar);
    addToolBar(Qt::LeftToolBarArea,&m_toolBarLeft);

}

