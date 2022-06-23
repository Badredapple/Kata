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

string checkout2(string &str1, char &ch)
{
    // str1 to char array:
    reverse(str1.begin(), str1.end());
    return str1;
}

string checkout3(string &str1, char &ch)
{
    // str1 to char array:
    int index = str1.find(ch);
    if(index != string::npos){
        reverse(str1.begin(), str1.begin() + index + 1);
    }

    return str1;
}