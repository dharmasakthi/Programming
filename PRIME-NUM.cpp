#include<iostream>
using namespace std;
int main()
{ 
	int num,n=0;
	cout<<"Finding prime number..."<<endl;
	cin>>num;
	if(num!=1)
	{
	  for(int i=2;i<num;i++)
	 {
		if((num%i)==0)
		{
			n++;
			break;

		}

	 }
		if(n==0)
		{
			cout<<"\nThe given number "<<num<<" is PRIME..\n";
		}
		else
		{
			cout<<"\nThe given number "<<num<<" is COMPOSITE\n";
		}
	}
	else
		cout<<"\nThe given number "<<num<<" is neither PRIME nor COMPOSITE..";


	
	return 0;

}