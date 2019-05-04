
#include <iostream>
#include <bits/stdc++.h> 

using namespace std; 
  

void print_box(int a, int b)  
{  
    int i, j;  
    for (i = 1; i <= a; i++)  
    {  
        for (j = 1; j <= b; j++)  
        {  
            if (i == 1 || i == a ||  
                j == 1 || j == b)          
                cout << "*";              
            else
                cout << "*"; 
        }  
        cout << endl; 
    }  
  
}  
  

int main()  
{  
    
     
    int r;
	int c;  
    
     cout <<"Enter how many rows:" " "; cin >> r;
     cout <<"Enter how many columns:" " "; cin >> c;
     
    print_box(r, c);  
    return 0;  
}  
  
