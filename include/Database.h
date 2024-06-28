#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <vector>
#include "Table.h"

class Database
{
    public:
    Database(const std::string name);
    ~Database();

    std::string getName() const;
    void addTable(const Table& table);
    void removeTable(const std::string& tableName);
    Table* getTable(const std::string& tableName);
    void listTables() const;

    private:
    std::string name;
    std::vector<Table> tables;
};

#endif