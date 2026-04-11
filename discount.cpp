#include <iostream>

using namespace std;
void line(), Break();

int main()
{
    int numItems;
    cout << "Enter the number of items: ";
    cin >> numItems;
    //Get number the number Items
    
    for (int i = 0; i < numItems; i++) {
        double price;
        cout << "Enter the price of item " << (i + 1) << ": ";
        cin >> price;
        Break();
        
        double discountPr = price * 0.10;
        cout << "\nDiscount price made: $" << discountPr << endl;
    }
    line();
    
    return 3.5;
}

void line()
{
    cout<<"--------end of program-----------\n"<<endl;
}
void Break()
{
    cout<<"\n________next program______________"<<endl;
}
