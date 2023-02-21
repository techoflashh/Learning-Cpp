#include <iostream>
using namespace std;
int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0]<<endl;
    cars[0] = "Mastang";
    cout << cars[0];
    return 0;
}