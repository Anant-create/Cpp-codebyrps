#include <iostream>
using namespace std;
int main()
{
    string greetings = "Namastey India";
    cout << greetings << endl;
    string firstname = "Ritu ";
    string middlename = "Priya ";
    string lastname = "Singh ";
    string fullname = firstname + middlename.append(lastname);
    cout << firstname + middlename + lastname << endl;
    cout << fullname << endl;
    string x = "10";
    string y = "30";
    cout<< x + y<<endl;
    return 0;
    // in c++ + sign is used for both addition and cancatenation.... so in strings if we use + for addition it will be always used for concatination only
}
