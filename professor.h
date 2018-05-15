#ifndef PROFESSOR_H_
#define PROFESSOR_H_
#include "student.cpp"

class Professor : virtual public Human
{
protected:
	char* course;
	Student* students;
	int capacity;
	int size;

	void copyStudents(const Professor& p);

public:
	Professor(const char* name = "", const char* date = "00000000", const char* c = "", int cap = 3);
	Professor(const Professor& other);
	Professor& operator=(const Professor& other);
	~Professor();

	void setCourse(const char* c);
	void setCapacity(int c);

	void addStudent(const Student& s);

	const char* getCourse() const { return this->course; }
	int getCapacity() const { return this->capacity; }
	int getSize() const { return this->size; }
	const Student* getStudents() const { return this->students; }

};

#endif PROFESSOR_H_
#pragma once
