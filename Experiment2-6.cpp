#include <iostream>
using namespace std;

int main()
{
int limit,x,n, total;
	
	do
	{
	cout<<"Enter a number: ";
	cin>>limit;
	total=0;
	x=0;
		for (n=0;n<=limit-1;n++)
		{
			x=x+1;
			total=total+x;
		}
		cout<<"The sum of all whole numbers from 1 to "<< limit <<endl; 
	}
while (limit!=0);

cout<<"Thank you!"<< endl;

return 0;
}

