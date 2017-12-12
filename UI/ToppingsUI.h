#ifndef TOPPINGSUI_H
#define TOPPINGSUI_H
#include "../Repo/Find_line.h"
#include "../Domain/Admin_domain.h"
#include "PizzaUI.h"
#include<vector>
#include<iostream>
#include<string>

using namespace std;
class ToppingsUI
{
public:
    ToppingsUI();
    void startUI();
    string get_toppingline();
    virtual ~ToppingsUI();

protected:

private:
    string toppingline;
};

#endif // TOPPINGSUI_H
