#pragma once
#ifndef STUDENT_H 

#define STUDENT_H 

#include <string> 

using namespace std; 

  

// Class Declaration 

class Student { 

private: 

    // Encapsulation: Data is kept private 

    string name; 

    int age; 

    int rollNo; 

    double gpa; 

  

public: 

    // Constructors 

    Student();                                       // Default constructor 

    Student(string n, int a, int r, double g = 0.0); // Parameterized constructor with default argument 

  

    // Destructor 

    ~Student(); 

  

    // Setter methods (Encapsulation - controlled access to private data) 

    void setName(string n); 

    void setAge(int a); 

    void setRollNo(int r); 

    void setGPA(double g); 

  

    // Getter methods 

    string getName() const; 

    int getAge() const; 

    int getRollNo() const; 

    double getGPA() const; 

  

    // Member functions 

    void displayInfo() const;           // Abstraction - hides internal details 

    void calculateGrade() const;        // Grade based on GPA 

}; 

  

#endif 