#include "Dean.cpp"

Student bestStudent(Professor& p)
{
	Student max = p.getStudents()[0];
	for (int i = 1; i < p.getSize(); i++)
	{
		if (max.getGrade() < p.getStudents()[i].getGrade())
			max = p.getStudents()[i];
	}
	return max;
}


bool findingDean(Professor* prof, Dean& d)
{
	int j = 0; 
	int size = *(&prof + 1) - prof; //from geeksforgeeks, sorry :(

	for(int i = 0; i<size; i++)
	{
		if (d == prof[i])
			return true;
	}
	return false;
}

int main()
{

	Human h("Bogomila", "19970203");
	std::cout << h.getName() << " " << h.getDate() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------";
	std::cout << std::endl;

	Student s("Bogomila", "19970203", 81400, 4);
	std::cout << s.getName() << " " << s.getDate() << " " << s.getFN() << " " <<s.getGrade() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------";
	std::cout << std::endl;

	Employee e("misha", "19640203", "chistachka", 700);
	std::cout << e.getName() << " " << e.getDate() << " " << e.getPosition() << " " << e.getSalary() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------";
	std::cout << std::endl;

	Professor p("James", "19450203", "Descrete Mathematics", 20);
	p.addStudent(s);
	p.addStudent(Student("Betina", "19971227", 81405, 5));
	p.addStudent(Student("Georgi", "19970320", 81407, 6));
	

	Professor pp("Georgiev", "19450203", "neshtosi", 8);
	pp.addStudent(s);
	pp.addStudent(Student("Betina", "19971227", 81405, 5));
	pp.addStudent(Student("Georgi", "19970320", 81407, 6));


	Professor ppp("Simeonov", "19450203", "DIS2", 8);
	ppp.addStudent(s);
	ppp.addStudent(Student("Betina", "19971227", 81405, 5));
	ppp.addStudent(Student("Georgi", "19970320", 81407, 6));

	Professor prof[3];
	prof[0] = p;
	prof[1] = pp;
	prof[2] = ppp;

	Dean d("James", "19450203", "Descrete Mathematics", 20, 2000, "dean");
	d.addStudent(s);
	std::cout << d.getName() << std::endl;
	std::cout << d.getDate() << std::endl;
	std::cout << d.getCourse() << std::endl;
	std::cout << d.getCapacity() << std::endl;
	std::cout << d.getSalary() << std::endl;
	std::cout << d.getPosition() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------";
	std::cout << std::endl;

	Student max = bestStudent(p);
	std::cout << "Best student is: ";
	std::cout << max.getName() << " " << max.getDate() << " " << max.getFN() << " " << max.getGrade() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------";
	std::cout << std::endl;



	if(findingDean(prof, d))
		std::cout<<"The dean is in the array of prffesors!"<< std::endl;
	else 
		std::cout << "The dean is not in the array of prffesors!" << std::endl;

	system("pause");
	return 0;
}