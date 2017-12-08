#ifndef ORDERUI_H
#define ORDERUI_H

#include <stdlib.h>
#include <iostream>
#include "../Model/order.h"
#include "../Domain/orderDomain.h"

using namespace std;

class OrderUI
{
public:
    OrderUI();
    void startUI();
    order createOrder();
private:
    void validateInput(char option);
    orderDomain order_domain;
};

#endif // ORDERUI_H
