#include "ShapeFactory.hpp"

std::unique_ptr<Shape> ShapeFactory::CreateShape(ShapeType shapeType)
{
    switch (shapeType)
    {
    case ShapeType::Circle:
        return std::make_unique<Circle>();
    case ShapeType::Square:
        return std::make_unique<Square>();
    default:
        return nullptr;
    }
}