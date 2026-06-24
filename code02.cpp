//Writing a function outside the main function
#include <iostream>

using namespace std;

string names()
{
	double item1, item2, result;
	string name;
	cout<<"Enter name of Item: ";
	cin>>name;
	cout<<"Enter price of first item: ";
	cin>>item1;
	cout<<"Enter price of second item: ";
	cin>>item2;
	result=item1+item2;

	cout<<"Item purchased is: "<<name<<endl;
	cout<<"Your total product purchased is: "<<result<<endl;

	return 0;
}

int main()
{
	names();
	return 0;
}
