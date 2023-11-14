//
// Created by levequ on 11/14/23.
//

#ifndef FPROJ_MENUFACTORY_H
#define FPROJ_MENUFACTORY_H

#include <memory>
#include "menu.h"
#include "optionmenu.h"

enum MenuType {
    DISPLAY,
    OPTION,
    INPUT
};

class MenuFactory {
    template<typename... Args>
    std::unique_ptr<Menu> CreateMenu(MenuType menutype, Args&&... args);
};


#endif //FPROJ_MENUFACTORY_H
