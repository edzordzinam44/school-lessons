//Functions outside the main function
#include <iostream>
using namespace std;

double totalmark()
{
	string sid, sname;
	double ctest, midsem;
	float exam, totmark;

	cout<<"Enter student ID: ";
	cin>>sid;
	cin.ignore();
	cout<<"Enter student Fullname: ";
	getline(cin, sname);
	cout<<"Enter classtest mark: ";
	cin>>ctest;
	cout<<"Enter the Midsem mark: ";
	cin>>midsem;
	cout<<"Enter total mark in examination: ";
	cin>>exam;

	totmark=ctest+midsem+exam;

	cout<<"\nStudent ID: "<<sid;
	cout<<"\nStudent name is: "<<sname;
	cout<<"\nTotal mark is: "<<totmark;

	if(totmark>=80)
	{
		cout<<"\nGrade is A";
	} else
		if(totmark>=70)
		{
			cout<<"\nGrade is B";
		}else
			if(totmark>=60)
			{
				cout<<"\nGrade is C";
			}else
				if(totmark>=50)
				{
					cout<<"\nGrade is D";
				} else
				{
					cout<<"\nGrade is F";
				}
	return 0;
}

int main()
{
	totalmark();

	return 0;
}
