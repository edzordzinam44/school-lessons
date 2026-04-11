/*Simple Interest = (Principal * Rate * Time) / 100 */
#include <iostream>
using namespace std;

int main()
{
    double principal, SI;
    int rate, time;

    cout<<"Enter the your Principal money: $";
    cin>>principal;
    cout<<"Enter the rate of payment: $";
    cin>>rate;
    cout<<"Enter the time for interest growth (years): ";
    cin>>time;

    SI = (principal * rate * time) / 100;
    principal = (SI * 100) / (rate * time);
    cout<<"\nYou will make an interest of $"<<SI<<" within "<<time<<"years";
    cout<<"\nPrincipal made is ::"<<principal;
    return 0;
}