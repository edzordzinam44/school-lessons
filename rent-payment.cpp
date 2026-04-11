//Rent payable by a student in an appartment
#include <iostream>
using namespace std;

int main()
{
    double rent, utility, totalRent;
    string stName, stId;
    int level;
    cout<<"Enter student ID: ";
    cin>>stId;
    cin.ignore();
    cout<<"Enter student name: ";
    getline(cin, stName);
    cout<<"Enter student level: ";
    cin>>level;

    cout<<"Enter the rent of the apartment: $";
    cin>>rent;
    cout<<"Enter the utility bills: $";
    cin>>utility;

    totalRent = rent + utility;
    cout<<"\nStudent ID: "<<stId<<endl;
    cout<<"Student Name: "<<stName<<endl;
    cout<<"Student Level: "<<level<<endl;

    cout<<"\nTotal rent payable is: $"<<totalRent<<" per semester"<<endl;

    return 0;
}