//
// Created by levequ on 10/12/23.
//

#include <utility>
#include <iostream>
#include <string>

#include "menu.h"



//void Menu::Print() {
//    int _menuFourth, _menuItemsCount;
//    std::string border = CreateBorder();
//    std::cout << border << std::endl;
//    _menuItemsCount = 2 + (int)this->menuItems.size();
//    _menuFourth = (this->menuHeight - _menuItemsCount) / 2;
//    for (int i=0, j=0;i<this->menuHeight;i++)
//    {
//        if (i >= _menuFourth && i <= (_menuItemsCount + _menuFourth))
//        {
//            if (i == _menuFourth)
//            {
//                std::cout << this->title;
//            }
//            if (i == (_menuFourth + _menuItemsCount) - ((int)menuItems.size()-1) + j)
//            {
//                std::cout << this->menuItems.at(j);
//                if (j <= (int)menuItems.size()-1) {
//                    j++;
//                }
//            }
//        }
//        std::cout << std::endl;
//    }
//
//    std::cout << border << std::endl << std::endl;
//
//    if (!this->displayOnly)
//    {
//
//    }
//}


Menu::Menu(int menuWidth, int menuHeight, std::string title, std::string description) {
    this->menuWidth = menuWidth;
    this->menuHeight = menuHeight;
    this->title = std::move(title);
    this->description = std::move(description);
}

std::string Menu::CreateBorder() const {
    std::string _;
    for (int i = 0;i<this->menuWidth; i++)
    {
        _ += "-----";
    }
    return _;
}

void Menu::Print() {
    // Function Variables
    std::string _wrappedDescription;
    std::string _menuBorder = this->CreateBorder();
    int _contentSize, _descLines = 0;
    int _menuMiddle = (this->menuHeight / 2);

    // Add 1 if the menu height is ODD
    // this->menuHeight % 2 ? _menuMiddle += 1 : _menuMiddle;
    // this->menuHeight % 2 ? _menuMiddle : _menuMiddle -= 1;
    _menuMiddle += this->menuHeight % 2;

    std::cout << _menuBorder;

    // Check if description is bigger than the menu width
    // - If it is, search for end of the last word before the menu width
    //   and add "\n"
    // - Keep track of the total lines using `_descLines` variable
    if (this->description.size() > _menuBorder.size() - 2)
    {
        // Cast to `int` (value is originally an `unsigned long`, which causes a Narrowing Conversion warning)
        _wrappedDescription = this-> description;
        _descLines = static_cast<int>(_wrappedDescription.size() / (_menuBorder.size()));
        for (int i = 1; i <= _descLines; i++)
        {
            // TODO: research std::size_t and std::string::npos
            std::size_t pos = _wrappedDescription.rfind(' ', (_menuBorder.size())*i)+1;
            if (pos != std::string::npos)
            {
                _wrappedDescription.insert(pos, "\n");
            }
            else
            {
                std::cout << "error";
            }
        }
    }

    // Total lines of text inside the menu
    // 3 = title + whitespace + one description line
    _contentSize = 3 + _descLines;

    // Handling on content larger than menu height
    if (_contentSize > this->menuHeight)
    {
        std::cout << "\nwarning: content bigger than menu\n";
        // this->menuHeight += (menuHeight-_contentSize)+2;
    }

    // Iterate through each line to
    // output title and description in
    // the middle of the menu
    for (int i = 0; i <= this->menuHeight; i++)
    {
        // Top of the content (in the middle of the menu)
        if (i == _menuMiddle - _contentSize/2)
        {
            std::cout << this->title;
        }

        // Start of Description
        if (i == (_menuMiddle + 1))
        {
            std::cout << ((_descLines > 0) ? _wrappedDescription : this->description);
        }
        std::cout << std::endl;
    }
    std::cout << _menuBorder;
}
