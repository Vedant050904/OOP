// CLasses

#include "class.h"

student::student()
{
    cout << "Student Default Constructor" << endl;
}

student::student(string name_in, int age_in)
{
    name_in = name;
    age_in = age;
}

void student::printInfo()
{
    cout << "Name is: " << name << endl;
    cout << "Age is: " << age << endl;
}

student::~student()
{
    cout << "Student Destructor" << endl;
}
