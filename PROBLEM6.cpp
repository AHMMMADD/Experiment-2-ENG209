
#include <iostream>
#include<bits/stdc++.h> 

using namespace std; 
  

void fibonacci(int n)
{ 
     int fib; 
     
     cout <<"Fibonacci numbers:" << endl;
     
    for ( int i =0; i < n; i++) 
    { 
        
        fib = (pow((1 + sqrt(5)), i) -  
               pow((1 - sqrt(5)), i)) /  
              (pow(2, i) * sqrt(5)); 
                
        
        cout<< fib<< ","; 
    } 
} 

int main() 
{  
     int n; 
	 cout << "THIS PROGRAM SHOWS THE SUBSEQUENT NUMBERS OF SEQUENCE AFTER (0 and 1)" "\n" "IN FIBONACCI SERIES!" "\n" << endl;
	 cout << "Please input the subsequent NUMBER of output after (0 and 1):" " "; cin >> n; 
    fibonacci(n + 2);     
    return 0; 
} 
  

