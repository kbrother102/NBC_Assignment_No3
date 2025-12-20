#include "Item.h"

void Item::PrintInfo() const
{
    std::cout << "[이름: " << name_ << ", 가격: " << price_ << "G]" << std::endl;
}

std::string Item::GetName() const
{
    return name_;
}

std::string Item::PrintName() const
{
    return "아이템 : " + std::string(name_);
}

