/*
 *	File      : manage_ui_gui_centralwidget.cpp
 *
 *	Created on: 05 Apr, 2017
 *	Author    : Davit Kalantaryan (Email: davit.kalantaryan@desy.de)
 *
 *
 */

#include "manage_ui_gui_centralwidget.hpp"

manage::ui::gui::CentralWidget::CentralWidget()
{
    //m_viewTypesLayout.addWidget(&m_taskStates);
    //m_mainLayout.addLayout(&m_viewTypesLayout);

    setLayout(&m_mainLayout);
}


manage::ui::gui::CentralWidget::~CentralWidget()
{
    //m_mainLayout.removeItem(&m_viewTypesLayout);
    //m_viewTypesLayout.removeWidget(&m_taskStates);
}
