#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	int x,y,z;
	
	cout << "Enter value of x:"; cin >> x;
	cout << "Enter value of y:"; cin >> y;
	z= 2.5;
	
	switch (x)
	{
		case 1:
			if (x == 1 && 1<y<5)
			cout << "The value of V from the formula V=xyz is:" " "<< x*y*2.5 << endl;
			else if (x == 1 && y>=5)
			cout << "The value of V from the formula V=x+y/z is:" " "<< x + y/2.5<< endl;
			break;
			
		case 2:
			if (x==2 && y<=5)
			cout << "The value of V from the formula V= abs((x-y)/2.5) is:" " " << abs((x-y)/2.5) << endl;
		    else if (x==2 && y>5)
		    cout << "The value of V from the formula V= V= x-sqrt(y + z)is:" " "<< x - sqrt(y+2.5) << endl;
		    
		default:
			if (x>=3 && y>=0)
			cout << "The value of V from the formula V = x+y+z is:" " "<< x + y + 2.5 << endl;
		
	}
	
	return 0;

}
