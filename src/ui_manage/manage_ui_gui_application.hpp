/*
 *	File      : manage_ui_gui_application.hpp
 *
 *	Created on: 05 Apr, 2017
 *	Author    : Davit Kalantaryan (Email: davit.kalantaryan@desy.de)
 *
 *
 */
#ifndef MANAGE_UI_GUI_APPLICATION_HPP
#define MANAGE_UI_GUI_APPLICATION_HPP

#include <QApplication>

namespace manage{ namespace ui{ namespace gui{

class Application : public QApplication
{
public:
    Application(int& argc, char* argv[]);
};

}}}

#endif // MANAGE_UI_GUI_APPLICATION_HPP
