#ifndef FIELD_H
#define FIELD_H

#include <string>

class Field
{
    public:
    Field(const std::string name, const std::string value);
    ~Field();

    std::string getName() const;
    std::string getValue() const;

    private:
    std::string name;
    std::string value;
};

#endif