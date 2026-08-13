//Netsalary Program for A coompany Staff
#include <iostream>
using namespace std;

class Staff
{
	string sid, sname, dept, posn;
	double drate;
	int ndays;
	double basicSal,grosSal,netSal;
	float tax,fuel,rent,socialSec;
	
	public:
		double staffInfo()
		{
			cout<<"Enter Staff ID: ";
			cin>>sid;
			cin.ignore();
			cout<<"Enter Staff's Name: ";
			getline(cin, sname);
			cout<<"Enter Staff Department of Work: ";
			cin>>dept;
			cout<<"Enter Staff Position: ";
			cin>>posn;
			cout<<"Enter number of Days of Work: ";
			cin>>ndays;
			cout<<"Enter Rate per Day of Work: ";
			cin>>drate;
			
			basicSal=ndays*drate;
			
			tax=basicSal*(0.10);
			fuel=basicSal*(0.15);
			rent=basicSal*(0.20);
			socialSec=basicSal*(0.14);
			
			grosSal = basicSal + fuel + rent;
			netSal = grosSal - (tax + socialSec);
			
			cout<<"\nStaff ID: "<<sid;
			cout<<"\nStaff Name: "<<sname;
			
			cout<<"\nBasic Salary is: "<<basicSal<<"ghs";
			cout<<"\nGross Salary is: "<<grosSal<<"ghs";
			cout<<"\nNet Salary is: "<<netSal<<"ghs";

            return 0;
		}
};

int main()
{
	Staff Security, CEO, Janitor, Junior;
	
	Security.staffInfo();
	
	return 0;
}