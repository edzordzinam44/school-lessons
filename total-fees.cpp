//Total school fess of a student
#include <iostream>
using namespace std;
void line();

int main()
{
    string stName, stId;
    double tuition, hostel, totalFees, src;

    cout<<"Enter student ID: ";
    cin>>stId;
    cin.ignore();
    cout<<"Enter student name: ";
    getline(cin, stName);
    cout<<"Enter tuition fees: $";
    cin>>tuition;
    cout<<"Enter hostel fees: $";
    cin>>hostel;
    cout<<"Enter SRC fees: $";
    cin>>src;

    totalFees = tuition + hostel + src;
    cout<<"\nStudent ID: "<<stId<<endl;
    cout<<"Student Name: "<<stName<<endl;
    cout<<"\nTotal school fees payable is: $"<<totalFees<<" per Year"<<endl;
    line();

    return 0;
}
void line()
{
    cout<<"\n-----------End of Program-----------\n"<<endl;
}