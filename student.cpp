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
Student() : id(0), age(0), name(""), course("") {}
 Student ( int i , int a, string n, string c)
 {
    id = i;
    age = a;
    name = n;
    course = c;
 }
 void show(int i, int a, string n, string c)
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
 