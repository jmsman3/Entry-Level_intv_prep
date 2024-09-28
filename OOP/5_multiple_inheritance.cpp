#include <bits/stdc++.h>
using namespace std;

// A class for person info
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void personInfo()
    {
        cout << name << "-" << age << endl;
    }
};
class Company
{
public:
    string c_name, c_location;
    Company(string c_name, string c_location)
    {
        this->c_name = c_name;
        this->c_location = c_location;
    }

    void companyInfo()
    {
        cout << c_name << "-" << c_location << endl;
    }
};

class Employee : public Person, public Company
{
public:
    Employee(string name, int age, string c_name, string c_location) : Person(name, age), Company(c_name, c_location)
    {
    }
};

int main()
{
    Employee obj("soyed", 23, "Google", "USA");

    obj.personInfo();
    obj.companyInfo();

    return 0;
}