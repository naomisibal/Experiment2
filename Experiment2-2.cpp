#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	float total, gallons;
	string balance;
	
	cout<<"Enter amount of gallons: ";
	cin>>gallons;
	
	cout<<"Do you have unpaid balance? (y or n): ";
	cin>>balance;
	
	if ((balance=="y")||(balance == "n"))
	{
	
		if (balance == "y")
			{
               cout<<"Yout total bill is: "<<(gallons*1.1) + 35 + 20;
	     	}
				
		if (balance == "n")
			{
		   	cout <<"Yout total bill: " <<(gallons*1.1) + 35;
			}
}
	
	
	_getch();
	
	return 0;
	
	
}
