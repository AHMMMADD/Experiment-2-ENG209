#include <iostream>


using namespace std;
int main()

{
	cout << "This program will generate a multiplication table" "\n" "(up to x10) of you selected number." "\n" << endl;

	int n;

	cout << "Enter a number up from 1 to 10:" " "; cin >> n;
	
	
    if (n <= 10)
		cout << "Multiplication table of" " "<< n << ":" "\n";
		cout << "1*" << n << " " "=" << 1 * n << endl;
		cout << "2*" << n << " " "=" << 2 * n << endl;
		cout << "3*" << n << " " "=" << 3 * n << endl;
		cout << "4*" << n << " " "=" << 4 * n << endl;
		cout << "5*" << n << " " "=" << 5 * n << endl;
		cout << "6*" << n << " " "=" << 6 * n << endl;
		cout << "7*" << n << " " "=" << 7 * n << endl;
		cout << "7*" << n << " " "=" << 8 * n << endl;
		cout << "9*" << n << " " "=" << 9 * n << endl;
		cout << "10*"<< n << " " "=" << 10 *n << endl;	

	

	return 0;
}

