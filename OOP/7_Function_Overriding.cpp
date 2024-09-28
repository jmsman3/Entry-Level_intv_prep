#include <bits/stdc++.h>
using namespace std;

class BaseCalculator
{
public:
    // Base class provides the sum method that takes 2 arguments
    virtual int sum(int num1, int num2)
    {
        return num1 + num2;
    }
};

class DerivedCalculator : public BaseCalculator
{
public:
    // Overriding the base class method (2 arguments)
    int sum(int num1, int num2) override
    {
        return num1 + num2 + 100;
    }
};

int main()
{
    DerivedCalculator obj;

    // Calls the overridden sum method in the derived class (2 arguments)
    cout << obj.sum(1, 2) << endl;   // Output: 103 (since it's overridden)

    return 0;
}
