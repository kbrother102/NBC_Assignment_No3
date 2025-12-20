#pragma once
#include "Item.h"
class Weapon :
    public Item
{
public:
    Weapon(std::string name, int price, int id) : Item(name, price, id) {}
    std::string PrintName() const override;
};

