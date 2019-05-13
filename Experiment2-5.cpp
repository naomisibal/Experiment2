#include <iostream>
#include <conio.h>
#include<cmath>
using namespace std;

int main ()
{
		int x,y,z, n, limit;
	limit=22;
	x=0;
	y=1;
	z=0;
	
	cout<<"Results: \n";
	cout<<x<<",";
	cout<<y<<",";
	
	for (n=0;n<=limit-3;n++)
	{
		z= y+x;
		x=y;
		y=z;
		
		cout<<z<<", ";
	}
return 0;
}
