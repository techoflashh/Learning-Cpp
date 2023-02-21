#include <iostream>

using namespace std;

int main(){
    int x = 6,y = 5,z = 7;
    cout<< "The sum of x, y, z is " << x+y+z<< endl;
    x = y = z = 10;
    cout << x << " " << y <<" "<<z<< endl;
    cout << "The New Sum is "<< x+y+z<<endl;
    return 0;
}