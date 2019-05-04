#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int n, i, sum = 0;

    do {
        cout << "Enter a number: " << " " ;
		cin >> n;  
    }
    while (n <= 0);

    for(i=1; i <= n; ++i)
    {
        sum += i;   
    }

    cout << "The sum of whole numbers from 1 to" " " << n << " is " << sum <<  endl;



    return 0;
}

