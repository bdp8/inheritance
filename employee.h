#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include "human.h"


//Дефинирайте клас Служител, който наследява Човек и описва служител с характеристики позиция(симовлен низ в динамичната памет.) 
//и заплата(положително реално число).
class Employee : virtual public Human
{
protected:
	char* position;
	unsigned salary;
public:
	Employee(const char* name = "", const char* date = "00000000", const char* pos = "", unsigned sal = 0);
	Employee(const Employee& other);
	Employee& operator=(const Employee& other);
	~Employee();

	void setPosition(const char*);
	void setSalary(unsigned);

	const char* getPosition() const { return this->position; }
	unsigned getSalary() const { return this->salary; }
};
#endif EMPLOYEE_H
#pragma once
