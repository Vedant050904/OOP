//
// Pointers
//
// & - used for the address.
// * - used for the value.
// -> - used to refer a member variable of a structure.
//
#include <iostream>
using namespace std;

struct CandidateInfo
{
    string Name;
    int Age = 20;
    string Salary = "250k";
};

int main()
{
    // Use of pointers in Structures

    CandidateInfo info;
    CandidateInfo *infoPtr = &info;
    infoPtr->Name = "Patel Shrey.";
    cout << "Name: " << (*infoPtr).Name << endl;
    cout << "Age: " << infoPtr->Age << endl;
    cout << "Salary: " << &info.Salary << endl;

    // Use of pointers in Arrays

    int arr[] = {10, 20, 30, 40};
    int *arrPtr = arr;
    for (int i = 0; i < 4; i++)
    {
        cout << arrPtr[i] << " "; // Alternate method is to use *(arr + i) instead
    }

    return 0;
}
