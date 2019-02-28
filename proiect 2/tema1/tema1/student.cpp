#include "student.h"

#include "STUDENT.h"
#include <iostream>
#include <istream>
using namespace std;

void InitStudent(Student &s)
{
	s.nume = new char[25];
	cin.get();
	cout << "Nume: " << endl;
	cin.get(s.nume, 25);
	cout << "Nota: " << endl;
	cin >> s.nota;
}

void AfisStudent(Student s)
{
	std::cout << "nume: " << s.nume << std::endl;
	std::cout << "nota: " << s.nota << std::endl;
}

void StergeStudent(Student &s)
{
	cout << "Stergere";
	delete[] s.nume;
}