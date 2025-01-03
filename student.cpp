#include<iostream>
#include<string>
#include<vector>
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
 

 void viewStudents() {
    if (studentCount == 0) {
        cout << "No students to display.\n";
        return;
    } 

    cout << "ID\tName\t\tAge\tCourse\n";
    cout << "-----------------------------------------\n";
    for (int i = 0; i < studentCount; i++) {
        students[i].displayDetails();
    }
}
};
 