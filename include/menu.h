//
// Created by levequ on 10/12/23.
//

#ifndef MENU_H
#define MENU_H

#include <string>
#include <vector>
#include <unordered_map>

class Menu;

class Menu {
public:
    /**
     * @brief Create a menu.
     * @params menuWidth Width of the menu.
     * @params menuHeight Height of the menu.
     * @params title Title to be displayed inside the menu.
     * @params description Accompanying text below the title.
     * @return Returns a menu object.
     *
     * THe most basic form of menu, only displays text.
     */
    Menu(int menuWidth, int menuHeight, std::string title, std::string description);
    std::string CreateBorder() const;
    /**
     * @brief Outputs the menu.
     */
    void Print();
private:
    int menuWidth;
    int menuHeight;
    std::string title;
    std::string description;
};

class MenuHolder {
public:
    static std::unordered_map<std::string, Menu> Menus;
};

#endif