#include <iostream>


using namespace std;

int main()

{
	int gallon;

	cout << "How many gallons of water have you consumed based on the meter reading? "; 
	cin >> gallon;
	
	if (gallon < 0)
	
	cout << "\nInvalid amount!"; 
	
	else
	

		{
			float demandCharge = 35, consumptionCharge = 1.10, totalCharge = demandCharge + (consumptionCharge * gallon), totalLateCharge = totalCharge + 20, amountPaid; 
	
			cout << "How much have you paid? ";
			cin >> amountPaid;
	
			if (amountPaid < totalCharge) 
	
				{
					cout << "\n. Your water bill costs P" << totalLateCharge << ", including an additional late charge fee of P20. \nPay Valid amount: ";
					cin >> amountPaid;
			
					if (amountPaid < totalLateCharge) 
	
						{	
							cout << "\nInvalid payment! Recheck your values." << endl; 
						}
				
					else
					
						{	
							cout << "\nYour payment is valid! You have a total change of P" << amountPaid - totalLateCharge << "." << endl; 
						}
				}
	
			else
			
				{
					cout << "\nYour payment is valid! Your water bill costs P" << totalLateCharge << " with a total change of P" << amountPaid - totalCharge << "." << endl; 
				}
			    {   cout << "Thank You!" << endl;
			    }
		}

		

	return 0;
}

