#include <iostream>
#include <string>
#include <limits>
#include "../include/Database.h"

std::string getDbName();
void showMenuOptions(std::string dbName);
int getUserOption();
int handleMenuOptions(int option);
void addTable();

int main()
{
    Database db(getDbName());
    int option = -1;

    while(option != 0)
    {
        showMenuOptions(db.getName());
        option = handleMenuOptions(getUserOption());
    }
    
    return 0;
}

std::string getDbName()
{
    std::string dbName;

    std::cout << "Welcome to the Mini DBMS\n";
    std::cout << "Enter a name for your database: ";
    std::cin >> dbName;

    return dbName;
}

void showMenuOptions(std::string dbName)
{
    std::cout << "Database ---> [" + dbName + "]\n";
    std::cout << "-- Main Menu --\n";
    std::cout << "1. Add New Table\n";
    std::cout << "2. List Current Tables\n";
    std::cout << "0. Quit\n";
}

int getUserOption()
{
    bool validOption = false;
    int option;

    while(!validOption)
    {
        std::cout << "Enter your choice: ";
        std::cin >> option;

        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if(option >= 0 && option <= 2)
        {
            validOption = true;
        }
    }

    return option;
}

int handleMenuOptions(int option)
{
    switch(option) 
    {
        case 0:
            std::cout << "Goodbye!";
            break;
        case 1:
            break;
        case 2:
            break;
    }

    return option;
}

void addTable()
{

}