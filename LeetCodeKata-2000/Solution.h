#include <string>
#include <iostream>
using namespace std;

string checkout(string &str1, char &ch)
{
    // str1 to char array:
    return str1;
}

bool checkout1(string &str1, char &ch)
{
    // str1 to char array:
    if(str1.find(ch) != string::npos)
        return true;
    else 
        return false;
}