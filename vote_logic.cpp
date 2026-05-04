//Voting App
#include <iostream>
using namespace std;
int main()
{
	int My_age = 18;
	cout<<"\nEnter your age: ";
	cin>>My_age;
	if (My_age >= 18)
	{
		cout<<"\nYou can vote"<<endl;
	} else {
		cout<<"\nYou can't vote"<<endl;
	}
	cout<<"Thank You!!"<<endl;

	return 0;
}
