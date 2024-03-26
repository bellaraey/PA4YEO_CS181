
#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <string>


class Manager : public Employee {
private:
    double bonus;


public:
    Manager(std::string& theName, double theWage, double theHours, double theBonus);

    double calcPay() const;
};
#endif 
