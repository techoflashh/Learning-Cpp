#include <iostream>
using namespace std;
int main(){
    string str1 = "Hello!";
    // strings in cpp are of mutable datatype
    cout<<str1[0]<<endl;
    str1[2] = 'M';
    cout << str1;
    string str2 = "This is a string with 'single qoute' in it";
    // we can use single qoute in string without using a backslash otherwise for double qoutes and other escape sequence characters we have to use backslash
    cout << str2;
    return 0;
}