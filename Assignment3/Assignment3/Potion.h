#pragma once
#include "Item.h"

class Potion :
    public Item
{
public:
    Potion(std::string name, int price, int id) : Item(name, price, id) {}
    std::string PrintName() const override;
};

