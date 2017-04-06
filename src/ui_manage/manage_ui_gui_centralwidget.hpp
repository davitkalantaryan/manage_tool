/*
 *	File      : manage_ui_gui_centralwidget.hpp
 *
 *	Created on: 05 Apr, 2017
 *	Author    : Davit Kalantaryan (Email: davit.kalantaryan@desy.de)
 *
 *
 */
#ifndef MANAGE_UI_GUI_CENTRALWIDGET_HPP
#define MANAGE_UI_GUI_CENTRALWIDGET_HPP

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>

namespace manage{ namespace ui{ namespace gui{

class CentralWidget : public QWidget
{
public:
    CentralWidget();
    ~CentralWidget();

private:
    QVBoxLayout m_mainLayout;
};

}}}

#endif // MANAGE_UI_GUI_CENTRALWIDGET_HPP
