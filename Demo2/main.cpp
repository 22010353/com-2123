#include <iostream>

using namespace std;

int main()
{
    double merchandiseCost,employeesSalary,yearlyRent,yearlyElectricityCost,profit;
    const double sale = 0.15;
    double interest = 0.10;



    cout << "Enter merchandiseCost:";
    cin >> merchandiseCost;

    cout << "Enter employeesSalary:";
    cin >> employeesSalary;

    cout << "yearlyRent:";
    cin >> yearlyRent;

    cout <<"Enter yearlyElectricityRent:";
    cin >>yearlyElectricityCost;

    profit = (merchandiseCost + employeesSalary + yearlyRent + yearlyElectricityCost)*(1-sale);
    cout <<"profit";
    netProfit =profit*(1+interest);
    cout << "netProfit:";
    return 0;
}
