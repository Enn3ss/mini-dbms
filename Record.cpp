#include "Record.h"

Record::Record(int id)
{
    this->id = id;
}

Record::~Record() {}

int Record::getId() const
{
    return this->id;
}

void Record::addField(const Field& field)
{
    this->fields.push_back(field);
}

void Record::listFields() const
{
    // List fields
}