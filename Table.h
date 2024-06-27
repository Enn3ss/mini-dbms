#ifndef TABLE_H
#define TABLE_H

#include <string>
#include <vector>
#include "Column.h"
#include "Record.h"

class Table
{
    public:
    Table(const std::string name);
    ~Table();

    std::string getName() const;
    void addColumn(const Column& column);
    void addRecord(const Record& record);
    void removeRecord(int id);
    void listColumns() const;
    void listRecords() const;

    private:
    std::string name;
    std::vector<Column> columns;
    std::vector<Record> records;
};

#endif