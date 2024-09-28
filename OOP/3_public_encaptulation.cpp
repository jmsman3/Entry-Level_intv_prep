#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int value = 5;

public:
    void display()
    {
        cout << value << endl;
    }

    void SetValue(int val)
    {
        value = val;
    }

    int GetValue()
    {
        cout << value << endl;
    }
};

int main()
{
    A obj;
    obj.display();
    obj.SetValue(10);
    obj.GetValue();
    return 0;
}

