#include<iostream>
using namespace std;
int main()
{
    std::string name = "Bro";

    std::string *p = &name;

    std::cout<< *p;
    return 0;
}