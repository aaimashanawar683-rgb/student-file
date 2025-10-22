// Student.cpp
#include <iostream>
#include "Student.h"
using namespace std;

// Default Constructor
Student::Student() {
    name = "Unknown";
    age = 0;
    rollNo = 0;
    gpa = 0.0;
    cout << "Student object created." << endl;
}

// Parameterized Constructor (Constructor Overloading)
Student::Student(string n, int a, int r, double g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
    cout << "Student object created for " << name << "." << endl;
}

// Destructor
Student::~Student() {
    cout << " Student object for " << name << " is destroyed." << endl;
}

// Setter Methods
void Student::setName(string n) { name = n; }
void Student::setAge(int a) { age = a; }
void Student::setRollNo(int r) { rollNo = r; }
void Student::setGPA(double g) { gpa = g; }

// Getter Methods
string Student::getName() const { return name; }
int Student::getAge() const { return age; }
int Student::getRollNo() const { return rollNo; }
double Student::getGPA() const { return gpa; }

// Display Student Information
void Student::displayInfo() const {
    cout << "-------------------------------------" << endl;
    cout << "Name: " << name << " | Age: " << age << " | Roll No: " << rollNo << " | GPA: " << gpa << endl;
}

// Calculate and Display Grade based on GPA
void Student::calculateGrade() const {
    char grade;
    if (gpa >= 3.7)
        grade = 'A';
    else if (gpa >= 3.0)
        grade = 'B';
    else if (gpa >= 2.0)
        grade = 'C';
    else if (gpa >= 1.0)
        grade = 'D';
    else
        grade = 'F';

    cout << "Grade: " << grade << endl;
   
}

