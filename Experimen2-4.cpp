#include <iostream>
#include <conio.h>
#include<cmath>
using namespace std;

int main ()
{
	int x=0;
	do

	{
	
		if (x<10)
		{
			x=x+1;
			cout<< x <<", ";
		}
		else
		{
			x=x+2;
			cout<< x <<", ";
		};
	}while (x!=30);
return 0;
}
