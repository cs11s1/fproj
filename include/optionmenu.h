//
// Created by levequ on 11/14/23.
//

#ifndef FPROJ_OPTIONMENU_H
#define FPROJ_OPTIONMENU_H

#include <utility>
#include <vector>
#include <string>
#include "menu.h"

class OptionMenu : public Menu {
public:
    OptionMenu(int menuWidth, int menuHeight, std::string title, std::string description, std::vector<std::string>);

    OptionMenu(int menuWidth, int menuHeight, std::string title, std::string description);

private:
    std::vector<std::string> optionList;
};


#endif //FPROJ_OPTIONMENU_H
