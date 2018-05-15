#include "employee.h"

Employee::Employee(const char* name, const char* date, const char* pos, unsigned sal) : Human(name, date)
{
	this->setPosition(pos);
	this->setSalary(sal);
}

Employee::Employee(const Employee& other): Human(other)
{
	this->setPosition(other.getPosition());
	this->setSalary(other.getSalary());
}

Employee& Employee::operator=(const Employee& other)
{
	if (this != &other)
	{
		Human::operator=(other);
		this->setPosition(other.getPosition());
		this->setSalary(other.getSalary());
	}
	return *this;
}

Employee::~Employee()
{
	delete[] this->position;
}

void Employee::setPosition(const char* p)
{
	if (!p) p = "";

	int sz = strlen(p) + 1;
	if (this->position != p)
	{
		delete[] this->position;
		this->position = new char[sz];
		strcpy_s(this->position, sz, p);
	}
}

void Employee::setSalary(unsigned s)
{
	this->salary = s;
}