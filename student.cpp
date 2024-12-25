#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
int id;
int age;
string name;
float cgpa;

 Student ( int i , int a, string n, float c)
 {
    id = i;
    age = a;
    name = n;
    cgpa = c;
 }
 void show()
 {
     cout<< "student Id:"<< id<< endl;
    cout<<"Student Age:"<<age<<endl;
    cout<<"Student Name: "<< name<< endl;
    cout<< "student CGPA:"<< cgpa<< endl;

 }

};
int main()
{
    Student S1 (23, 3323,"Mumu",3.21);
    S1.show();
}

