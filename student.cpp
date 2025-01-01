#include<iostream>
#include<string>
using namespace std;
 class Person {
protected:
    int id;
    string name;
    int age;
public:
    Person() : id(0), age(0), name("") {}
    Person(int i, string n, int a) : id(i), name(n), age(a) {}
    virtual void show() const = 0;  
};
const int MAX_STUDENTS = 100;
Student students[MAX_STUDENTS];
int studentCount = 0;
void addStudent() 
{
  if (studentCount >= MAX_STUDENTS)
     {
    cout << "Student list is full! Cannot add more students.\n";
    return;
     }
   int id, age;
   string name, course;
    cout <<"Enter Student ID: ";
    cin >> id;
    cin.ignore();  
    cout <<"Enter Student Name: ";
    getline(cin, name);
    cout <<"Enter Student Age: ";
    cin >> age;
    cin.ignore();
    cout <<"Enter Student Course: ";
    getline(cin, course);

    students[studentCount].show(id, name, age, course);
    studentCount++;
    cout << "Student added successfully!\n";
}
 