#include <iostream>


using namespace std;
int main()
{
    double n1, n2, n3;

    cout << "Please Enter Three(3) numbers: " "\n"<< endl;
	cout << "Enter first number: "; cin >> n1;
	cout << "Enter second number: "; cin >> n2;
	cout << "Enter third number: " ; cin >> n3;
   

    if( n1>=n2 && n1>=n3 )
        cout << "The LARGEST number of three numbers is" "\t" << n1 << endl;

	else if ( n2>=n1 && n2>=n3 )
        cout << "The LARGEST number of three numbers is" "\t" << n2 << endl;

    else if( n3>=n1 && n3>=n2 )
        cout << "The LARGEST number of three numbers is" "\t" << n3 << endl;

	else if( n1==n2 && n1>=n3 )
        cout << "The LARGEST number of three numbers is" "\t" << n1 << endl;

	else if( n1>=n2 && n1==n3 )
        cout << "The LARGEST number of three numbers is" "\t" << n1 << endl;

	else if( n3>=n1 && n3==n2 )
        cout << "The LARGEST number of three numbers is" "\t" << n3 << endl;


    
	return 0;
}

