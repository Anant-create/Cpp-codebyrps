#include <iostream>
#include <string>
using namespace std;
int main()
{
    int time;
    cout<<"Enter the time : ";
    cin>>time;
    string result = (time < 12) ? "Good Morning" : "Good evening.";
    cout << result;
    return 0;
}