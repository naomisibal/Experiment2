#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	string package;
	int hours, price;
	cout<< "What is your package?:  ";
	cin>>package;
	
	if ((package=="A")||(package == "B")||(package=="C"))
	{
		cout<<"Number of hours:  ";
		cin>>hours;
		{
			if (package == "A")
			{
				if (hours>10)
				{
					price = 995+(hours-10)*20;
				}
			   else{
				price = 995;
			}
	     	}
	
		else if (package == "B")
			
		     {
		     	if (hours>20)
		     	{
		     		price =1495 + (hours-20)*10;
				 }
				 else
				 {
				 	price=1495;
				 }
			}	
			
		else if (package == "C")
     	{
		price = 1995;
    	}
	
		}
		
		cout << "The total amount due: Php  " <<price;
	}
_getch();
		
return 0;
	
}
