#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int *p;
    p =&a;  //address if a is assigned to p

    cout<<"the address of a is  "<<a<< "is" << p;
    cout<<"the address of "<< a<< "is"<<&a;

    //another method to print the value using pointer//
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of a can be printed using pointer"<<*p;

   
}


#include<iostream>
using namespace std;

int main(){

int a=10;
int *p;

void *p2;

p=&a; // address of a is assigned to p

p2=&a;


cout<<"the address of "<<a <<" is "<< p<<endl;
cout<<" the address of "<<a << " is"<<&a;

cout<<" the value of a is"<<a<<endl;
cout<<" the value of a can be priented using pointer "<<*p;


}