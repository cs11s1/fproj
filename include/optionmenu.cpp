//
// Created by levequ on 11/14/23.
//

#include "optionmenu.h"

OptionMenu::OptionMenu(int menuWidth, int menuHeight, std::string title, std::string description, const std::vector<std::string>& optionList)
: Menu(menuWidth, menuHeight, std::move(title), std::move(description))
{

};
