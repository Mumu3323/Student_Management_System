#include<iostream>
#include<string>
using namespace std;
 class Person
  {
protected:
    int id;
    string name;
    int age;
public:
    Person() : id(0), age(0), name("") {}
    Person(int i, string n, int a) : id(i), name(n), age(a) {}
    virtual void show() const = 0;  
};
 class Student : public Person 
 {
private:
    string course;
public:
    Student() : Person(), course("") {}
    Student(int i, string n, int a, string c) : Person(i, n, a), course(c) {}
    void show() const override {  
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student Course: " << course << endl;
    }
    void displayDetails() const 
    {
        cout << id << "\t" << name << "\t" << age << "\t" << course << endl;
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
    cout << "Enter Student ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Student Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter Student Course: ";
    getline(cin, course);

    students[studentCount] = Student(id, name, age, course);
    studentCount++;
    cout << "Student added successfully!\n";
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
// Function to search for a student by ID
void searchStudent() {
    if (studentCount == 0) {
        cout << "No students available to search.\n";
        return;
    }
