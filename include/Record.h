#ifndef RECORD_H
#define RECORD_H

#include <vector>
#include "Field.h"

class Record
{
    public:
    Record(int id);
    ~Record();

    int getId() const;
    void addField(const Field& field);
    void listFields() const;

    private:
    int id;
    std::vector<Field> fields;
};

#endif