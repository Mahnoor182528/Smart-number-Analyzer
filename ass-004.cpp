#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number:";
    cin >> number;
    cout << "Number:" << "number/n";

    cout << "Type:";
    if(number>0)
    {cout << "Positive/n";}
    else if(number<0)
    {cout << "Negative/n";}
    else
    {cout << "Zero/n";}

    cout << "Parity:";
    if(number % 2==0)
    {cout << "Even/n";}
    else
    {cout << "Odd/n";}

    cout << "Greater than 100:";
    if(number > 100)
    {cout << "Yes/n";}
    else 
    {cout << "No/n";}

    cout << "Square:";
    cout << "Square:" << number*number << "/n";

    return 0;


}