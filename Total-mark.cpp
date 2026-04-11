//Accept student details and calculate total Marks
#include <iostream>
using namespace std;
void line(), Break();

int main()
{
    string stdName, stdId;
    float ctest, midsem, exam, asignment, totmark;

    cout<<"Enter student's ID: ";
    cin>>stdId;
    cin.ignore();
    cout<<"Enter student's fullname: ";
    getline(cin, stdName);
    cout<<"Enter student's Total Assignments' mark: ";
    cin>>asignment;
    cout<<"Enter students' classtest mark: ";
    cin>>ctest;
    cout<<"Enter students' Midsem mark: ";
    cin>>midsem;
    cout<<"Enter students Final exam mark: ";
    cin>>exam;
    line();

    totmark = (asignment + ctest + midsem + exam);

    cout<<"\nStudent ID: "<<stdId<<endl;
    cout<<"Student Name: "<<stdName<<endl;
    cout<<"\nTotal mark: "<<totmark<<"%"<<endl;
    if (totmark > 100)
    {
        cout<<"\nError: Total mark exceeds 100%!!\n";
    } else if (totmark >= 80)
    {
        cout<<"Grade: A"<<endl;
    }
    else if (totmark >= 70)
    {
        cout<<"Grade: B"<<endl;
    }
    else if (totmark >= 60)
    {
        cout<<"Grade: C"<<endl;
    }
    else if(totmark >= 50)
    {
        cout<<"Grade: D"<<endl;
    } else {
        cout<<"Grade: F"<<endl;
    }
    
    Break();

    return 0;
}
void line()
{
    cout<<"---------------------------------";
}
void Break()
{
    cout<<"\n---------end of program----------";
}