#ifndef COLUMN_H
#define COLUMN_H

#include <string>

class Column
{
    public:
    Column(const std::string name, const std::string type);
    ~Column();

    std::string getName() const;
    std::string getType() const;

    private:
    std::string name;
    std::string type;
};

#endif