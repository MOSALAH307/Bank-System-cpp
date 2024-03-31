#pragma once
#include "Client.h"

class Employee : public Person{
protected:
	//Attribute
	double salary;
public:
	//Constructors
	Employee() : Person(){
		this->salary = 0.0;
	}
	Employee(string name, int id, string password, double salary) : Person(name, id, password){
		setSalary(salary);
	}
	//Setter
	void setSalary(double salary) {
	    if(Validation::validSalary(salary))
            this->salary = salary;
	}
	//Getter
	double getSalary() {
		return this->salary;
	}
	//Methods
	void display() {
		Person::display();
		cout << "Salary: " << this->salary << endl;
	}
};
