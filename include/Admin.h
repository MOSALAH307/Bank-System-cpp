#pragma once
#include "Employee.h"

class Admin : public Employee{
public:
	//Constructors
	Admin() : Employee(){}
	Admin(string name, int id, string password, double salary) : Employee(name, id, password, salary){}
};
