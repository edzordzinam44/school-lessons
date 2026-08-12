//Total Mark and Grade with one function
#include <iostream>
using namespace std;

class Grades
{
	string sid, sname;
	double ctest,exams,midsem;
	float totmark;
	
	public:
		double totalmark()
		{
			cout<<"=====Student Grading System=====\n";
			
			cout<<"\nEnter student's ID: ";
			cin>>sid;
			cin.ignore();
			cout<<"Enter student's fullname: ";
			getline(cin, sname);
			cout<<"Enter Student Class Mark: ";
			cin>>ctest;
			cout<<"Enter Student Mid-Sem Mark: ";
			cin>>midsem;
			cout<<"Enter Student Total Exam Score: ";
			cin>>exams;
			
			totmark=ctest+midsem+exams;
			
			cout<<"\nStudent ID: "<<sid;
			cout<<"\nStudent Name: "<<sname<<endl;
			cout<<"\nTotal Mark: "<<totmark<<"%"<<endl;
			
			if(totmark>100)
			{
				cout<<"\nError: Total mark Exceeds 100!!!....\n";
			} else if(totmark>=80)
			{
				cout<<"Grade: A";
			} else if (totmark>=70)
			{
				cout<<"Grade: B";
			} else if (totmark>=60)
			{
				cout<<"Grade: C";
			} else if (totmark>=50)
			{
				cout<<"Grade: D";
			} else 
			{
				cout<<"You failed..."<<endl;
			}
            return 0;
		}

};

int main()
{
	Grades student1,student2,student3;
	
	student1.totalmark();
	
	return 0;
}