#pragma once

#include <memory>
#include "../Shape.hpp"
#include "../ShapeType.hpp"

#include "../Circle/Circle.hpp"
#include "../Square/Square.hpp"

class ShapeFactory
{
public:
    static std::unique_ptr<Shape> CreateShape(ShapeType type)
    {
        switch (type)
        {
        case ShapeType::Circle:
            return std::make_unique<Circle>();
        case ShapeType::Square:
            return std::make_unique<Square>();
        default:
            return nullptr;
        }
    }
};