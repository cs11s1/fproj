//
// Created by levequ on 11/14/23.
//

#include "optionmenu.h"

OptionMenu::OptionMenu(int menuWidth, int menuHeight, std::string title, std::string description, std::vector<std::string>options)
: Menu(menuWidth, menuHeight, std::move(title), std::move(description))
{

}

OptionMenu::OptionMenu(int menuWidth, int menuHeight, std::string title, std::string description) : Menu(menuWidth,
                                                                                                         menuHeight,
                                                                                                         title,
                                                                                                         description){

}

