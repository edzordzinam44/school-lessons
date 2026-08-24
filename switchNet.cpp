//Netsalary Program for A company Staff
#include <iostream>
using namespace std;

class Staff
{
	string sid, sname, dept, posn;
	double drate;
	int ndays, Level;
	double basicSal,grosSal,netSal;
	float tax,fuel,rent,socialSec;
	
	public:
		double staffInfo()
		{
			cout << "=====Netsalary Calculator App=====" << endl;
    		cout << "\nSelect your Position: ";
    		cout << "\n1. CEO";
    		cout << "\n2. Security";
    		cout << "\n3. Janitor";
    		cout << "\n4. Secertary"<<endl;
    		cin >>Level;
    		
    		switch(Level)
    		{
    			case 1:
    				cout<<"Enter number of Days of Work: ";
					cin>>ndays;
					cout<<"Enter Rate per Day of Work: ";
					cin>>drate;
					
					basicSal=(ndays*drate)+790;
					tax=basicSal*(0.10);
					fuel=basicSal*(0.15);
					rent=basicSal*(0.20);
					socialSec=basicSal*(0.14);
			
					grosSal = basicSal + fuel + rent;
					netSal = grosSal - (tax + socialSec);
					
					cout<<"\nCEO name is: Fabulous Hope"<<endl;
					cout<<"Basic Salary is: "<<basicSal<<"$$"<<endl;
					cout<<"Gross Salary is: "<<grosSal<<"$$"<<endl;
					cout<<"\nTake home Net Salary is: "<<netSal<<"$$";
					break;
				case 2:
					cout<<"Enter Your Staff ID: ";
					cin>>sid;
					cin.ignore();
					cout<<"Enter Staff's Name: ";
					getline(cin, sname);
					cout<<"Enter number of Days of Work: ";
					cin>>ndays;
					cout<<"Enter Rate per Day of Work: ";
					cin>>drate;
					
					basicSal=(ndays*drate)+790;
					tax=basicSal*(0.10);
					fuel=basicSal*(0.15);
					rent=basicSal*(0.20);
					socialSec=basicSal*(0.14);
			
					grosSal = basicSal + fuel + rent;
					netSal = grosSal - (tax + socialSec);
					
					cout<<"\nStaff ID is: "<<sid;
					cout<<"\nStaff Name is: "<<sname<<endl;
					cout<<"Basic Salary is: "<<basicSal<<"$$"<<endl;
					cout<<"Gross Salary is: "<<grosSal<<"$$"<<endl;
					cout<<"\nTake home Net Salary is: "<<netSal<<"$$";
					break;
				case 3:
					cout<<"Enter Your Staff ID: ";
					cin>>sid;
					cin.ignore();
					cout<<"Enter Staff's Name: ";
					getline(cin, sname);
					cout<<"Enter number of Days of Work: ";
					cin>>ndays;
					cout<<"Enter Rate per Day of Work: ";
					cin>>drate;
					
					basicSal=(ndays*drate)+790;
					tax=basicSal*(0.10);
					fuel=basicSal*(0.15);
					rent=basicSal*(0.20);
					socialSec=basicSal*(0.14);
			
					grosSal = basicSal + fuel + rent;
					netSal = grosSal - (tax + socialSec);
					
					cout<<"\nStaff ID is: "<<sid;
					cout<<"\nStaff Name is: "<<sname<<endl;
					cout<<"Basic Salary is: "<<basicSal<<"$$"<<endl;
					cout<<"Gross Salary is: "<<grosSal<<"$$"<<endl;
					cout<<"\nTake home Net Salary is: "<<netSal<<"$$";
					break;
				case 4:
					cout<<"Enter Your Staff ID: ";
					cin>>sid;
					cin.ignore();
					cout<<"Enter Staff's Name: ";
					getline(cin, sname);
					cout<<"Enter number of Days of Work: ";
					cin>>ndays;
					cout<<"Enter Rate per Day of Work: ";
					cin>>drate;
					
					basicSal=(ndays*drate)+790;
					tax=basicSal*(0.10);
					fuel=basicSal*(0.15);
					rent=basicSal*(0.20);
					socialSec=basicSal*(0.14);
			
					grosSal = basicSal + fuel + rent;
					netSal = grosSal - (tax + socialSec);
					
					cout<<"\nStaff ID is: "<<sid;
					cout<<"\nStaff Name is: "<<sname<<endl;
					cout<<"Basic Salary is: "<<basicSal<<"$$"<<endl;
					cout<<"Gross Salary is: "<<grosSal<<"$$"<<endl;
					cout<<"\nTake home Net Salary is: "<<netSal<<"$$";
					break;
				default:
					cout<<"Invalid Number selected...Try again!!";
					break;
			}
            return 0;
		}
};

int main()
{
	Staff user;
	
	user.staffInfo();
	
	return 0;
}