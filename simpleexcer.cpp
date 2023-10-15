#include <iostream>
using namespace std;

int main (){
    double sales = 95000;
    cout << "Sales: $" << sales << endl;
    
    const double stateTaxRate = .04;
    double stateTaxes = sales * stateTaxRate;
    cout << "State Taxes: $" << stateTaxes << endl;

    const double countyTaxRate = .02;
    double countyTaxes = sales * countyTaxRate;
    cout << "County Taxes: $" << countyTaxes << endl;

    double totalTax = stateTaxes + countyTaxes;
    cout << "Total Taxes: $" << totalTax << endl;

    cout << "Net Sales: $" << sales - totalTax;

return 0;
}