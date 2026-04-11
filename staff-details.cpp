//Accept staff details and calculate net salary
/*Tax charged = 10%
Gross salary of 20%
*/
#include <iostream>
using namespace std;
void line(), Break();

int main()
{
    string staffName, staffId;
    double salary, grossSal, netSal, tax, alawa;

    cout<<"Enter staff ID: ";
    cin>>staffId;
    cin.ignore();
    cout<<"Enter staff fullname: ";
    getline(cin, staffName);
    cout<<"Enter staff allowances: $";
    cin>>alawa;
    cout<<"Enter staff basic salary: $";
    cin>>salary;
    line();

    tax = salary * 0.10;
    grossSal = salary + (salary * 0.20) + alawa;
    netSal = grossSal - tax;

    cout<<"\nStaff ID: "<<staffId<<endl;
    cout<<"Staff Name: "<<staffName<<endl;
    cout<<"\nGross Salary: $"<<grossSal<<endl;
    cout<<"Tax Deducted: $"<<tax<<endl;
    cout<<"Net Salary: $"<<netSal<<endl;
    Break();


    return 0;
}
void line()
{
    cout<<"---------------------------------"<<endl;
}
void Break()
{
    cout<<"\n______________End of program______________"<<endl;
}