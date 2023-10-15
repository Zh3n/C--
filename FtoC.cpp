#include <iostream>
using namespace std;

int main(){
    cout << "Give Faren Degrees: ";
    double faren;
    cin >> faren;

    double Celsius = (faren - 32) * (5.0/9.0);
    cout << "F to C is " << endl;
    cout << Celsius;
    
    return 0;
}

