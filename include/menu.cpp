//
// Created by levequ on 10/12/23.
//

#include <utility>
#include <iostream>
#include <string>

#include "menu.h"


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
    std::string _wrappedDescription = this-> description;
    std::string _menuBorder = this->CreateBorder();
    int _contentSize;
    int _menuMiddle = (this->menuHeight / 2);

    int _descLines = static_cast<int>(_wrappedDescription.size() / (_menuBorder.size()));
    std::string _wrappedLinesArray[_descLines+1];

    // Add 1 if the menu height is ODD
    _menuMiddle += this->menuHeight % 2;

    std::cout << _menuBorder;

    // Check if description is bigger than the menu width
    // - If it is, search for end of the last word before the menu width
    //   and add "\n"
    // - Keep track of the total lines using `_descLines` variable
    if (this->description.size() > _menuBorder.size() - 2)
    {
        // Cast to `int` (value is originally an `unsigned long`, which causes a Narrowing Conversion warning)
        for (int i = 1; i <= _descLines; i++)
        {
            // TODO: research std::size_t and std::string::npos
            std::size_t pos = _wrappedDescription.rfind(' ', (_menuBorder.size())*i)+1;
            if (pos != std::string::npos)
            {
//                _wrappedDescription.insert(pos, "\n");
                std::string temp;
                for (int j = (int) pos; j > 0; j--)
                {
                    temp += _wrappedDescription[j];
                }
                _wrappedLinesArray[i-1] = temp;
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
    for (int i = 0, j = 0; i <= this->menuHeight; i++)
    {
        // Top of the content (in the middle of the menu)
        if (i == _menuMiddle - _contentSize/2)
        {
            std::cout << this->title;
        }

        // Start of Description
        if (i == (_menuMiddle + 1))
        {
            if (sizeof(_wrappedLinesArray) > 0)
            {
                std::cout << _wrappedLinesArray[j];
                j++;
            }
        }
        std::cout << std::endl;
    }
    std::cout << _menuBorder << std::endl;
}
