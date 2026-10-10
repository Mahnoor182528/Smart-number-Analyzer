#include <iostream>
using namespace std;

int main()
{
    int num1 , num2 , num3;
    cout << " Enter num1 , num2 , num3:";
    cin >> num1 , num2 , num3;
    cout << "num1 , num2 , num3" << "num1 , num2 , num3/n";

    cout << "Highest Greater number:";
    if (num1 > num2 && num1 > num3)
    {cout << "num1/n";}
    else if (num2 > num1 && num2 > num3)
    {cout << "num2/n";}
    else
    {cout << "num3/n";}

    cout << "Lowest number:";
    if(num1 < num2 && num1 < num3)
    {cout << "num1/n";}
    else if(num2 < num1 && num2 < num3)
    {cout << "num2/n";}
    else
    {cout << "num3/n";}

    cout << "Parity:";
    if((num1 , num2 , num3)%2)
    {cout << "Even/n";}
    else
    {cout << "Odd/n";}

    cout << "Type:";
    if((num1 , num2 , num3)>0)
    {cout << "Positive/n";}
    else
    {cout << "Negative/n";}

    return 0;
}