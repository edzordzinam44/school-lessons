//Writing a program to calculate a student total school fees as function, putting the function above the main function.
#include <iostream>
using namespace std;

double totalFees()
{
    double acadfees, utilfees, srcdues;
    double healthfees, sportfees;
    string sname, sid, dept;
    double totalfees;

    cout<<"Enter Student's Name: ";
    getline(cin, sname);
    cout<<"Enter Student's Department: ";
    getline(cin, dept);
    cout<<"Enter Student's ID: ";
    cin>>sid;

    cout<<"Enter Student's Academic Fees: ";
    cin>>acadfees;
    cout<<"Enter Student's Utility Fees: ";
    cin>>utilfees;
    cout<<"Enter Student's SRC Dues: ";
    cin>>srcdues;
    cout<<"Enter Student's Health Fees: ";
    cin>>healthfees;
    cout<<"Enter Student's Sport Dues: ";
    cin>>sportfees;
    
    totalfees=acadfees+utilfees+srcdues+healthfees+sportfees;

    cout<<"\nStudent's Name is: "<<sname;
    cout<<"\nStudent's ID is: "<<sid;
    cout<<"\nStudent's Department is: "<<dept;
    cout<<"\nStudent is expected to pay: "<<totalfees<<"ghs";

    return 0;
};

int main()
{
    totalFees();

    return 0;
}