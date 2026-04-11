#include <iostream>
using namespace std;

int main()
{
    int Level;
    string stName, stId, programme;
    double rent, utility, totalRent;
    cout << "Rent Calculator App " << endl;
    cout << "\nSelect your level: ";
    cout << "\n1. 100 level";
    cout << "\n2. 200 level";
    cout << "\n3. 300 level";
    cout << "\n4. 400 level"<<endl;
    cin >> Level;

    switch (Level)
    {
    case 1:
        cout<<"Enter student ID: ";
        cin>>stId;
        cin.ignore();
        cout<<"Enter student name: ";
        getline(cin, stName);
        cout<<"Enter the Programme: ";
        cin>>programme;
 
        cout<<"Enter the rent of the apartment: $";
        cin>>rent;
        cout<<"Enter the utility bills: $";
        cin>>utility;

        totalRent = rent + utility;
        cout<<"\nTotal rent payable is: $"<<totalRent<<" per semester"<<endl;
        break;
    case 2:
        cout<<"Enter student ID: ";
        cin>>stId;
        cin.ignore();
        cout<<"Enter student name: ";
        getline(cin, stName);

        cout<<"Enter the rent of the apartment: $";
        cin>>rent;
        cout<<"Enter the utility bills: $";
        cin>>utility;

        totalRent = (rent + utility) * 0.10;
        cout<<"\nTotal rent payable is: $"<<totalRent<<" per semester"<<endl;
        break;
    case 3:
        cout<<"Enter student ID: ";
        cin>>stId;
        cin.ignore();
        cout<<"Enter student name: ";
        getline(cin, stName);

        cout<<"Enter the rent of the apartment: $";
        cin>>rent;
        cout<<"Enter the utility bills: $";
        cin>>utility;

        totalRent = (rent + utility) * 0.20;
        cout<<"\nTotal rent payable is: $"<<totalRent<<" per semester"<<endl;
        break;
    case 4:
        cout << "Enter student ID: ";
        cin >> stId;
        cin.ignore();
        cout << "Enter student name: ";
        getline(cin, stName);

        cout << "Enter the rent of the apartment: $";
        cin >> rent;
        cout << "Enter the utility bills: $";
        cin >> utility;

        totalRent = (rent + utility) * 0.30;
        cout<<"\nTotal rent payable is: $"<<totalRent<<" per semester"<<endl;
        break;
    default:
        cout << "Invalid level selected!!" << endl;
        break;
    }
}