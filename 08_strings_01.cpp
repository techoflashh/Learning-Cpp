#include <iostream>
#include <string>
using namespace std;
int main(){
    string firstname = "Himanshu " ;
    string lastname = "Yadav";
    cout<<firstname<<lastname<<endl;
    string fullname;
    fullname = firstname+lastname; // this will concatenate the firstname and lastname
    cout<<fullname<<endl;
    firstname.append(lastname); //this will append the lastname in the firstname
    cout<<firstname<<endl;
    return 0;
}