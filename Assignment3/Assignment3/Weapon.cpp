#include "Weapon.h"


std::string Weapon::PrintName() const
{
    return "장비아이템" + Item::GetName();
}
