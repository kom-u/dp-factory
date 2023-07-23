#pragma once

#include <memory>
#include "../Shape.hpp"
#include "../ShapeType.hpp"

#include "../Circle/Circle.hpp"
#include "../Square/Square.hpp"

class ShapeFactory
{
public:
    static std::unique_ptr<Shape> CreateShape(ShapeType type);
};