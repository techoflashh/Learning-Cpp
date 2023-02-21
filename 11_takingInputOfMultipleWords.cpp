#include <iostream>
using namespace std;
int main(){
    string fullName;
    cout << "Enter full name" <<endl;
    // cin >> fullName; // this can not take input of multiple words
    // cout << fullName << endl; // this will print only the first word entered
    // to get multiple words string input we have to use the getline() function
    getline(cin,fullName);
    cout << fullName << endl;
    return 0;
}