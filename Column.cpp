#include "Column.h"

Column::Column(const std::string name, const std::string type)
{
    this->name = name;
    this->type = type;
}

Column::~Column() {}

std::string Column::getName() const
{
    return this->name;
}

std::string Column::getType() const
{
    return this->type;
}