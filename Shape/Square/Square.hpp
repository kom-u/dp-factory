#pragma once

#include <iostream>
#include "../Shape.hpp"

class Square : public Shape
{
public:
    void Draw() override;
};