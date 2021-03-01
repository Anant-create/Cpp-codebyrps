#include <iostream>
#include <string>
#include <ctime>

int main()
{
    std::string Response[] = {
        "Hey",
        "How are you?",
        "I Love you !",
        "Wanna be my valentine ?",
        "Can I get to know about you fav place ?",
        "I HEARD YOU!",
        "SO, YOU ARE TALKING TO ME",
        "CONTINUE, I am LISTENING",
        "VERY INTERESTING CONVERSATION",
        "TELL ME MORE...",
        "Lets have some fun!!!",
        "Lets kiss each other",
    };

    srand((unsigned) time(NULL));

    std::string sInput = "";
    std::string sResponse = "";

    while(1) {
        std::cout<<">";
        std::getline(std::cin, sInput);
        int nSelection = rand() % 12;
        sResponse = Response[nSelection];
        std::cout<<sResponse<<std::endl;
    }
    return 0;
}
