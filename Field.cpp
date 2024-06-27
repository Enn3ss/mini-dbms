#include "Field.h"

Field::Field(const std::string name, const std::string value)
{
    this->name = name;
    this->value = value;
}

Field::~Field() {}

std::string Field::getName() const
{
    return this->name;
}

std::string Field::getValue() const
{
    return this->value;
}