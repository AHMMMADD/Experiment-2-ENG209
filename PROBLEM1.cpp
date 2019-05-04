#include <iostream>
#include <string>


using namespace std;
int main() 

{
 string package;
 float time;
 float price;

    cout << "This Internet Service Provider has 3 different Subscription Packages" "\n" << endl;
	cout << "Package A: P995/mo 10 hrs of access. Additional hours are P20/hr " << endl;
	cout << "Package B: P1495/mo 20 hrs of access are provided. Additional hours are P10/r" << endl;
	cout << "Package C: P1995/mo of unlimited access" "\n" << endl;
    cout << "Please choose your selected package: "; cin >> package;

 
    if ((package == "A") || (package == "B") || (package == "C")) 
{
    cout << "Assume that the number of days in a month is 31 days" << endl;
	cout << "NOTE: NUMBER OF HOURS SHOULD NOT EXCEED 744 HOURS" << endl;
	cout << "Number of hours: ";
    cin >> time;
 
    if (time <= 744) 
{

    if (package == "A") 
{
    if (time > 10) 
{
    price = 995 + (time - 10) * 20;
}   else 
{
    price = 995;
}

}   else if (package == "B") 
{
    if (time > 20) 
{
    price = 1495 + (time - 20) * 10;
}   else 
{
    price = 1495;
}

}   else 
{
    price = 1995;
}
}   else 
{
    cout << "Invalid number of hours!";
	cout << "NOTE: NUMBER OF HOURS SHOULD NOT EXCEED 744 HOURS";
}
}   else 
{
    cout << "Invalid package!";
	cout << "NOTE: INPUT CAPITAL LETTER: A, B, or C";
}
    cout << "Total Amount Due of your selected Package is: P" << price;

    return 0;
} 

