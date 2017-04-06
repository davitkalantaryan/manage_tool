/*
 *	File      : main_gui_manage.cpp
 *
 *	Created on: 05 Apr, 2017
 *	Author    : Davit Kalantaryan (Email: davit.kalantaryan@desy.de)
 *
 *
 */


#include "manage_ui_gui_application.hpp"
#include "manage_ui_gui_mainwindow.hpp"
#include <stdio.h>

int main(int argc, char* argv[])
{
    freopen( "/dev/null", "w", stderr);

    manage::ui::gui::Application app(argc,argv);
    manage::ui::gui::MainWindow aMainWnd;

    aMainWnd.show();

    app.exec();
    return 0;
}
