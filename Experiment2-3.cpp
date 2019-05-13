#include <iostream>
#include <conio.h>
#include<cmath>
using namespace std;

int main ()
{
	int v, x, y, z, total;
	cout<<"Enter values for: "<< endl;
	cout<<"x: ";cin>>x;
	cout<<"y: ";cin>>y;
	cout<<"z: ";cin>>z;
	{
	
	if ((x=1)&&(y>1&&y<5))
	{
	total=x*y*z;
   }

   	if ((x=1)&&((y>5)||(y=5)))
   	{
	   
   	total=x+(y/z);
   }
   
   	if((x=2)&&((y<5)||(y=5)))
   	{
   	total= abs((x-y)/z);
   }
   
   
   	if((x=2)&&(y>5))
   	{
   	total=x-sqrt(y+z);
}
   
   	else 
   	total=x+y+z;
   
}
cout<<"z= "<<total;
   
   _getch();
   
return 0;
}
