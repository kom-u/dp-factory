#pragma once

#include <iostream>
#include "../Shape.hpp"

class Circle : public Shape
{
public:
    void Draw() override;
};