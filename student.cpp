#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int id;
    int age;
    float cgp;
    string name;

    Student(int i, int a, string n, float cp)
    {
        id = i;
        cgp = cp;
        age = a;
        name = n;
    }
    void show()
    {
        cout << "student Id:" << id << endl;
        cout << "Student Age:" << age << endl;
        cout << "Student Name: " << name << endl;
    }
};
int main()
{
    Student S1(23, 3323, "Mumu", 3.5);
    S1.show();
}
