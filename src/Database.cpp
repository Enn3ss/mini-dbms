#include "Database.h"
#include <iostream>

Database::Database(const std::string name)
{
    this->name = name;
}

Database::~Database() {}

void Database::addTable(const Table& table)
{
    this->tables.push_back(table);
}

void Database::removeTable(const std::string& tableName)
{
    // Remove table
}

Table* Database::getTable(const std::string& tableName)
{
    for(auto& table : this->tables)
    {
        if(table.getName() == tableName)
        {
            return &table;
        }
    }
    return nullptr;
}

void Database::listTables() const
{
    // List tables
}