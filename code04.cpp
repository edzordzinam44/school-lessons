//Student Total Fees App
#include <iostream>
using namespace std;

double totalfees()
{
	string sname,dept,sid;
	double src,tuition,utilfee;
	double totfee;

	cout<<"Enter Student ID: ";
	cin>>sid;
	cin.ignore();
	cout<<"Enter Student Name: ";
	getline(cin, sname);
	cout<<"Enter student Department: ";
	getline(cin, dept);
	cout<<"Enter the SRC dues: ";
	cin>>src;
	cout<<"Enter your tuition fees: ";
	cin>>tuition;
	cout<<"Enter Utility fees: ";
	cin>>utilfee;

	totfee=src+tuition+utilfee+200;
	cout<<"\nStudent ID: "<<sid;
	cout<<"\nStudent Name is: "<<sname;
	cout<<"\nStudent Department: "<<dept;
	cout<<"\nTotal fees payable is: "<<totfee;

	return 0;

}

int main()
{
	totalfees();
	
	return 0;
}
