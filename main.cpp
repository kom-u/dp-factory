#include "lib.hpp"

int main()
{
    auto circle = ShapeFactory::CreateShape(ShapeType::Circle);
    circle->Draw();

    auto square = ShapeFactory::CreateShape(ShapeType::Square);
    square->Draw();

    return 0;
}