#include <bits/stdc++.h>
using namespace std;

class Caluculator
{
public:
// function aita jeta 2 ta argument nei
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }

    // same name er function overloaded hoye 3 ta argumetn nei 

    int sum(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }
};
int main()
{
    Caluculator obj;

    cout << obj.sum(1, 2) << endl;
    cout << obj.sum(1, 2, 3) << endl;

    return 0;
}
