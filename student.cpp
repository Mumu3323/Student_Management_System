#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
int id;
int age;
string name;

 Student ( int i , int a, string n)
 {
    id = i;
    age = a;
    name = n;
 }
 void show()
 {
     cout<< "student Id:"<< id<< endl;
    cout<<"Student Age:"<<age<<endl;
    cout<<"Student Name: "<< name<< endl;

 }


};
int main()
{
    Student S1 (23, 3323,"Mumu");
    S1.show();
}

