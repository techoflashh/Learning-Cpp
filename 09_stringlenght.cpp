#include <iostream>
#include <string>
using namespace std;
int main(){
    string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << alphabets.length()<<endl;
    cout << alphabets.size()<<endl;
    // both functions are same length is just an alias of size 
    return 0;
}