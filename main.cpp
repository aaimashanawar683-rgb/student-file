// main.cpp
#include <iostream>
#include "Student.h"
using namespace std;

int main() {
    cout << "=== Student Information System Prototype ===" << endl;

    // Object 1: Using Default Constructor
    Student s1;
    s1.setName("Ali");
    s1.setAge(20);
    s1.setRollNo(101);
    s1.setGPA(3.8);
    s1.displayInfo();
    s1.calculateGrade();

    // Object 2: Using Parameterized Constructor
    Student s2("Sara", 19, 102, 3.1);
    s2.displayInfo();
    s2.calculateGrade();

    // Object 3: Using Parameterized Constructor with Default GPA
    Student s3("Ahmed", 22, 103); 
    s3.setGPA(2.4);
    s3.displayInfo();
    s3.calculateGrade();

   
    return 0;
}
