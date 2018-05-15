#include "human.h"

class Student : public Human
{
private:
	int fn;
	double grade;
public:
	Student(const char* n = "", const char * d = "00000000", int fn = 0, double gr = 2) : Human(n, d)
	{
		this->setFN(fn);
		this->setGrade(gr);
	}

	void setFN(int f)
	{
		this->fn = f;
	}
	
	void setGrade(double g)
	{
		this->grade = g;
	}

	int getFN() const { return this->fn; }
	double getGrade() const { return this->grade; }
};