 #include <iostream>
using namespace std;

class Student{
public:
int rollNumber;
static int systemId;
};

int Student::systemId=20189038;

int main(){
Student studentOne;
studentOne.rollNumber=44;

cout<<studentOne.rollNumber<<endl;
cout<<studentOne.systemId<<endl;
return 0;
} 


/*second code */


#include <iostream>
using namespace std;

class Name{
public:
static string formalName;
string nickName;
};
string Name::formalName = "Ritu";

int main()
{
Name myName;
myName.nickName = "Urvashi";

Name yourName;
yourName.nickName = "LOL";

cout << myName.formalName << endl;
cout << myName.nickName << endl;
cout << yourName.formalName << endl;
cout << yourName.nickName << endl;
return 0;
}