#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student
{
public:
int id;
int age;
string name;
string course;

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

};
int main()
{
    Student S1 (23, 3323,"Mumu","Computer Science");
    S1.show();
}
