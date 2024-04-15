#ifndef VALIDATION_H
#define VALIDATION_H
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Validation{
public:
	static bool validName(string name) {
		for (int i = 0; i < name.length(); i++) {
			if (!isalpha(name[i]) || name.length() < 5 || name.length() > 20) return false;
		}
		return true;
	}
	static bool validPassword(string password) {
        if (password.length() < 8 || password.length() > 20) return false;
		return true;
	}
    static bool validBalance(double balance){
        if(balance < 1500){
            return false;
        }
        return true;
    }
    static bool validSalary(double salary){
        if (salary < 5000){
            return false;
        }
        return true;
    }
};




#endif // VALIDATION_H
