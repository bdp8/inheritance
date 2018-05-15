#include "professor.h"

Professor::Professor(const char* name, const char* date, const char* c, int cap) : Human(name, date), students(nullptr), course(NULL)
{
	this->setCourse(c);
	this->setCapacity(cap);
	this->students = new Student[cap];
	this->size = 0;
}

Professor::Professor(const Professor& other): Human(other)
{
	this->setCourse(other.getCourse());
	this->setCapacity(other.getCapacity());
	copyStudents(other);
	this->size = other.getSize();
}


Professor& Professor::operator=(const Professor& other)
{
	if (this != &other)
	{
		Human::operator=(other);
		this->setCourse(other.getCourse());
		this->setCapacity(other.getCapacity());
		copyStudents(other);
		this->size = other.getSize();
	}
	return *this;
}

Professor::~Professor()
{
	delete[] this->course;
	delete[] this->students;
}

void Professor::setCourse(const char* c)
{
	if (!c) c = "";

	size_t length = strlen(c) + 1;

	char* buffer = new char[length];
	strcpy_s(buffer, length, c);


	delete[] this->course;
	this->course = buffer;
}

void Professor::setCapacity(int c)
{
	this->capacity = c;
}

void Professor::addStudent(const Student& s)
{
	if (this->capacity >= size + 1)
	{
		this->students[this->size] = s;
		this->size++;
	}
	else throw "FULL CAPACITY\n";
}

void Professor::copyStudents(const Professor& p)
{
	if (this->students != p.students)
	{
		delete[] this->students;
		this->students = new Student[p.getCapacity()];

		for (int i = 0; i < p.getSize(); i++)
		{
			this->students[i] = p.students[i];
		}
	}
}