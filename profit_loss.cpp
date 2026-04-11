/*
Profit = selling Price - Cost Price
Loss = Cost price - Selling price
Discount = 10 / 100
*/
#include <iostream>
using namespace std;
void line();

int main()
{
    double sellingPr, costPr, discount, Profit, Loss;
    int numItems;
    cout << "Enter the number of items: ";
    cin >> numItems;
    if (cin.fail())
    {
        cout<<"\nWrong input!!"<<endl;
        return 0;
    }//if numItems is not equal to an integer

    for (int i = 0; i < numItems; i++)
    {
        cout << "Enter the cost of the Item "<<(i + 1)<<": $";
        cin >> costPr;
        cout << "Enter the selling Price of the Item "<<(i + 1)<<": $";
        cin >> sellingPr;
        if (sellingPr > costPr)
        {
            Profit = sellingPr - costPr;
            cout<<"\nYou made a Profit of: $"<<Profit<<endl;
        } else if (costPr > sellingPr)
        {
            Loss = costPr - sellingPr;
            cout<<"\nYou made a loss of: $"<<Loss<<endl;
        } else {
            cout<<"\nNo Profit nor Loss was made."<<endl;
        }
        line();
        discount = sellingPr * 0.10;
        cout<<"\nDiscount made on Item is: $"<<discount<<endl;
        line();
    }
    return 0;
}
void line()
{
    cout<<"--------end of program-----------\n"<<endl;
}