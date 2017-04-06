/*
 *	File      : manage_ui_gui_mainwindow.hpp
 *
 *	Created on: 05 Apr, 2017
 *	Author    : Davit Kalantaryan (Email: davit.kalantaryan@desy.de)
 *
 *
 */
#ifndef MANAGE_UI_GUI_MAINWINDOW_HPP
#define MANAGE_UI_GUI_MAINWINDOW_HPP

#include <QMainWindow>
#include <QAction>
#include "manage_ui_gui_centralwidget.hpp"
#include <QToolBar>

namespace manage{ namespace ui{ namespace gui{

class MainWindow : public QMainWindow
{
public:
    MainWindow();
    ~MainWindow();

private:
    void CreateActions();
    void CreateMenus();

private:
    CentralWidget   m_centralWidget;
    QAction         m_actionQuit;
    QAction         m_actionByColumns;
    QToolBar        m_toolBar;
    QToolBar        m_toolBarLeft;
};

}}}

#endif // MANAGE_UI_GUI_MAINWINDOW_HPP
