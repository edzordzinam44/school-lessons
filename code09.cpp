//Total school fess of a student
#include <iostream>
using namespace std;
void line();

int main()
{
    string stName, stId, department, level, session;
    double tuition, hostel, totalFees, src, Ict, medicals, exam;

    cout<<"Enter student ID: ";
    cin>>stId;
    cin.ignore();
    cout<<"Enter student name: ";
    getline(cin, stName);
    cout<<"Enter student Level: ";
    cin>>level;
    cin.ignore();
    cout<<"Enter student department: ";
    getline(cin, department);
    cout<<"Enter ICT Levy: ";
    cin>>Ict;
    cout<<"Enter medical fee: ";
    cin>>medicals;
    cout<<"Enter Examination fee: ";
    cin>>exam;
    cout<<"Enter tuition fees: ";
    cin>>tuition;
    cout<<"Enter Student's session: ";
    cin>>session;
    cout<<"Enter SRC fees: ";
    cin>>src;

    totalFees = tuition + exam + src + medicals + Ict;
    cout<<"\nStudent ID: "<<stId<<endl;
    cout<<"Student Name: "<<stName<<endl;
    cout<<"Student Department: "<<department<<endl;
    cout<<"Student session is: "<<session<<endl;
    cout<<"\nTotal school fees payable is: "<<totalFees<<"ghs per Year"<<endl;
    line();

    return 0;
}
void line()
{
    cout<<"\n-----------End of Program-----------\n"<<endl;
}
