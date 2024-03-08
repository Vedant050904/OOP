#include <iostream>

using namespace std;

class student
{
private:
    string name = "Shrey Patel K.";
    int age = 20;

public:
    student();
    student(string name_in, int age_in);
    void printInfo();
    ~student();
};

int main()
{
    student s;

    s.printInfo();

    return 0;
}