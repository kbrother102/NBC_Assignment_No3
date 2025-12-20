#include "Potion.h"

std::string Potion::PrintName() const
{
    return "물약아이템" + Item::GetName();
}
