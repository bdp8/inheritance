#include "human.h"
#include <cstring>


Human::Human(const char* n, const char* d):name(NULL)
{
	this->setName(n);
	this->setDate(d);
}

Human::Human(const Human& other)
{
	this->setName(other.getName());
	this->setDate(other.getDate());
}
Human& Human::operator=(const Human& other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		this->setDate(other.getDate());
	}
	return *this;
}
Human::~Human()
{
	delete[] this->name;
}

void Human::setName(const char* n)
{
	if (!n) n = "";

	size_t length = strlen(n) + 1;

	char* buffer = new char[length];
	strcpy_s(buffer, length, n);

	
	delete[] this->name;
	this->name = buffer;

}

void Human::setDate(const char* d)
{
	strcpy_s(this->date, 9, d);
}
