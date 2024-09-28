#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int __value = 5;

public:
    void display()
    {
        cout << __value << endl;
    }

    void SetValue(int val)
    {
        __value = val;
    }

    int GetValue()
    {
        cout<<__value<<endl;
    }

    // Friend Funtion to access Private Number

    friend void accessPrivate(A& a);
};
//  aikhane  'a' holo ekta argument ,jeta ekta convention , A class er through te ekta value get korbo ,sei value ta holo argument a 
void accessPrivate(A& a){     
    cout<<'Direct access Privale value-'<<a.__value<<endl;
}

int main()
{
    A obj;
    obj.display();
    obj.SetValue(10);
    obj.GetValue();
    accessPrivate(obj) ;

    return 0;
}