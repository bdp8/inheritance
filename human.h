#ifndef HUMAN_H_
#define HUMAN_H_
#include <iostream>

class Human
{
protected:
	char* name;
	char date[9];
public:
	Human(const char* n = "", const char* d = "00000000");
	Human(const Human& other);
	Human& operator=(const Human& other);
	~Human();
	
	void setName(const char* n);
	void setDate(const char* d);

	const char* getName() const { return this->name; }
	const char* getDate() const { return this->date; }

	bool operator==(const Human& other)
	{
		return strcmp(this->name, other.name) == 0 &&
			strcmp(this->date, other.date) == 0;
	}
};
#endif HUMAN_H_
#pragma once
