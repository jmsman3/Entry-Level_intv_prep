#include<bits/stdc++.h>
using namespace std;

class A
{
   public:
   function<void()>jubaer_value;  
  //    ekta function store korar variable ,jeta naem desi jubaer 
};
void display(){
    cout<<"i am mehtods"<<endl;
}

int main(){

   A obj;
   obj.jubaer_value = display;
    
    // display function ta jubaer namok variable er moddhe store korlam

    // Call the function
    obj.jubaer_value();
    
    cout<<&obj<<endl;



    return 0;
}