#include <iostream>
using namespace std;

class staffInfo
{
	string sid, sname;
	double netsal,grosSal,basicSal,tax,socsec;
	int ndays, rday;

	public:
	double staffs()
	{
		cout<<"=====Netsalary Calculator App===="<<endl;
        	cout<<"\nEnter Staff ID: ";
        	cin>>sid;
        	cout<<"Enter Staff Name: ";
        	cin>>sname;
        	cout<<"Enter Number days workerd: ";
        	cin>>ndays;
        	cout<<"Enter the rate per day: ";
        	cin>>rday;

        	basicSal=ndays*rday;

		tax=basicSal*(0.10);
		socsec=basicSal*(0.15);

		grosSal=basicSal+tax+socsec;
		netsal=basicSal-(tax+socsec);

		cout<<"\nStaff ID is: "<<sid;
		cout<<"\nStaff Name is: "<<sname;
		cout<<"\nTotal take home money is: "<<netsal;
		
		return 0;
	}
};


int main()
{
	staffInfo ama;
	ama.staffs();

	return 0;
}
