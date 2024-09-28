#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    string name;

    // constructor for class A
    A(string name)
    {
        this->name = name;
    }
    
    // display function for the name
    void display()
    {
        cout << name << endl;
    }
};

// Derived class B inheriting from class A
class B : public A
{
public:
  // Constructor for class B, using A's constructor
    B(string name) : A(name)
    {
    }
};
int main()
{

    B obj("sayed");
    obj.display();

    return 0;
}