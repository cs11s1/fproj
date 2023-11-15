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
public:
    template<typename... Args>
    std::unique_ptr<Menu> CreateMenu(MenuType menutype, Args&&... args)
    {
        std::unique_ptr<Menu> menu;
        switch (menutype){
            case DISPLAY:
                menu = std::make_unique<Menu>(std::forward<Args>(args)...);
                break;
            case OPTION:
                menu = std::make_unique<OptionMenu>(std::forward<Args>(args)...);
                break;
            default:
                break;
        }
        return menu;
    };
};


#endif //FPROJ_MENUFACTORY_H
