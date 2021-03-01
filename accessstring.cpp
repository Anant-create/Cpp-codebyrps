#include <iostream>
using namespace std;
int main()
{
    string mystring = "Hello";
    mystring[0]='J';
    cout << mystring <<endl;

    string fullname ;
    cout << "The full name is  : ";
    getline(cin, fullname);
    cout<< " Your name is : " << fullname ;

    return 0 ;
}