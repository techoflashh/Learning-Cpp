#include <iostream>
using namespace std;
int main(){
    int x = 3e4;
    float y = 23e-2;
    double z = 34e-5; // till e-5 it prints in float and afer that it prints in scientific notation
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    return 0;
}