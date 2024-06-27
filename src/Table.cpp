#include "Table.h"

Table::Table(const std::string name)
{
    this->name = name;
}

Table::~Table() {}

std::string Table::getName() const
{
    return this->name;
}

void Table::addColumn(const Column& column)
{
    this->columns.push_back(column);
}

void Table::addRecord(const Record& record)
{
    this->records.push_back(record);
}

void Table::removeRecord(int id)
{
    // Remove record using id
}

void Table::listColumns() const
{
    // List columns
}

void Table::listRecords() const
{
    // List records
}