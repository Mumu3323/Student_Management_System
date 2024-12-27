#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
int id;
int age;
string name;
string course;
public:
 Student ( int i , int a, string n, string c)
 {
    id = i;
    age = a;
    name = n;
    course = c;
 }
 void show()
 {
     cout<< "student Id:"<< id<< endl;
    cout<<"Student Age:"<<age<<endl;
    cout<<"Student Name: "<< name<< endl;
    cout<< "student Course:"<< course<< endl;

 }
void displayDetails() const {
        cout << id << "\t" << age << "\t" << name << "\t" << course << endl;
    }
int getId() const 
 {
  return id;
 }
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
}
 