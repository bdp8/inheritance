#include "professor.h" 
#include "employee.h"

class Dean: public Professor, public Employee
{
public:
	Dean(const char* name, const char* date, const char* course, int capacity, unsigned salary, const char * position): Human(name, date), Professor(name, date, course, capacity), Employee(name,date,position,salary) {}
};
