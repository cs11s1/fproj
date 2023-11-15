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
    int _menuMiddle = (this->menuHeight / 2);
    int _widthPadding = 5;
    int _contentSize, _marginSize;

    int _descLines = 1 + static_cast<int>(_wrappedDescription.size() / (_menuBorder.size()));
    std::string _wrappedLinesArray[_descLines];


    std::cout << _menuBorder;

    // Check if description is bigger than the menu width
    // - If it is, search for end of the last word before the menu width
    //   and add "\n"
    // - Keep track of the total lines using `_descLines` variable
    if (_descLines > 1)
    {
        std::size_t fpos = _wrappedDescription.rfind(' ', (_menuBorder.size()-_widthPadding))+1;
        _wrappedLinesArray[0] = _wrappedDescription.substr(0, fpos);
        for (int i = _descLines; i > 1; i--)
        {
            // TODO: research std::size_t and std::string::npos
            std::size_t pos = _wrappedDescription.rfind(' ', (_menuBorder.size()-_widthPadding)*(i-1))+1;
            std::size_t epos = _wrappedDescription.rfind(' ', (_menuBorder.size()-_widthPadding)*(i))+1;
            if (pos != std::string::npos)
            {
//                _wrappedDescription.insert(pos, "\n");
                std::string temp;
                temp =  _wrappedDescription.substr(pos, epos-pos);
                _wrappedLinesArray[i-1] = temp;
            }
            else
            {
                std::cout << "error";
            }
        }
    }
    else
    {
        _wrappedLinesArray[0] = _wrappedDescription;
    }

    // Total lines of text inside the menu
    // 2 = title + whitespace + description lines
    _contentSize = 2 + _descLines;
    _marginSize = ((this->menuHeight - _contentSize) / 2) + 1;

    // Handling on content larger than menu height
    if (_contentSize > this->menuHeight)
    {
        std::cout << "\nwarning: content bigger than menu\n";
        // this->menuHeight += (menuHeight-_contentSize)+2;
    }

    // Iterate through each line to
    // output title and description in
    // the middle of the menu
    for (int i = 0, j = -2; i <= this->menuHeight; i++)
    {
        // Top of the content (in the middle of the menu)
        if (!(i < _marginSize || i >= _marginSize + _contentSize))
        {
            if (j<-1)
            {
               std::cout << this->title;
            }
            else if (j>=0)
            {
                std::cout << _wrappedLinesArray[j];
            }
            j++;
        }
        std::cout << std::endl;
    }
    std::cout << _menuBorder << std::endl;
}

//int marginSize = (outerHeight - InnerHeight) / 2;
//for (int i=0; i<outerbox; i++)
//{
//    if (i<marginSize || i >= marginSize + innerHeight)
//    {
//        // render margin
//    }
//    else
//    {
//        //render box
//    }
//}
