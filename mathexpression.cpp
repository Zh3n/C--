#include <iostream>
using namespace std;

int main(){
    double x = 10;
    int y = 3;
    double z = x / y;
    int b = x++; // x=11, b=10

    cout << "b = " << b << endl
         << "x = " << x;
}