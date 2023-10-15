#include <iostream>
#include <cmath>
using namespace std;

int main (){
    const double pi = 3.141592653;
    cout << "what is the radius?" << endl;
    double number;
    cin >> number;
    double radius = pow(number, 2.0);
    double area = pi * radius;

    cout << area;

return 0;

}