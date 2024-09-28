#include <bits/stdc++.h>
using namespace std;

// Base class Person
class Person
{
public:
    string name;
    int age;

    // Constructor for Person
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    // Method to display personal info
    void personalInfo()
    {
        cout << name << " - " << age << endl;
    }
};

// Derived class Company from Person
class Company : public Person
{
public:
    string cname; // Company name
    string cloc;  // Company location

    // Constructor for Company
    Company(string name, int age, string cname, string cloc)
        : Person(name, age)
    { // Call the Person constructor
        this->cname = cname;
        this->cloc = cloc;
    }

    // Method to display company info
    void companyInfo()
    {
        cout << cname << " - " << cloc << endl;
    }
};

// Derived class Employee from Company
class Employee : public Company
{
public:
    // Constructor for Employee
    Employee(string name, int age, string cname, string cloc)
        : Company(name, age, cname, cloc)
    {
    }
};

int main()
{

    Employee obj("Sayed", 24, "Google", "USA");

    obj.personalInfo();
    obj.companyInfo();

    return 0;
}
