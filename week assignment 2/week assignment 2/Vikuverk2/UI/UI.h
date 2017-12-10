#ifndef UI_h
#define UI_h
#include <iostream>
#include <stdio.h>
#include "../Services/Services.h"
#include "../Model/Model.h"

class UI
{
public:
    void main_menu();
    void display_items(vector<string> items);
    void go_back();
private:
};
#endif
