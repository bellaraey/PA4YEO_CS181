#include <iostream>
#include <string>
#include <vector> // Include vector header for dynamic array usage
#include "Manager.h"


using namespace std;

Manager::Manager(string& theName, double theWage, double theHours, double theBonus) : Employee(theName, theWage, theHours), bonus(theBonus) 
{
    bonus = theBonus;
}

double Manager::calcPay() const 
{
    return Employee::calcPay() + bonus;
}

