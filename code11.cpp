//Creating an object using a class which is private
#include <iostream>
using namespace std;

class Vehicle
{
	public:
	string name,model,color;
	int yearofmanu;
	double length;
};

int main()
{
	Vehicle bugatti,toyota,kia,opel,nissan,benz;
	
	cout<<"Enter vehicle name: ";
	cin>>benz.name;
	cout<<"Enter vehicle model: ";
	cin>>benz.name;
	cout<<"Enter vehicle year: ";
	cin>>benz.yearofmanu;
	cout<<"Enter vehicle color: ";
	cin>>benz.color;
	
	cout<<"\nVehicle Name is: "<<benz.name;
	cout<<"\nAnimal year is: "<<benz.yearofmanu;
	cout<<"\nAnimal color is: "<<benz.color;
	
	return 0;
}
