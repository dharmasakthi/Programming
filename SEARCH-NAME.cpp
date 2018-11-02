#include<iostream>
//#include<cytype>
using namespace std;
void data();
void search();
char name[20][20];
int n;
int main()
{   
	cout<<"Searching the name in the array list:"<<endl;
	cout<<"\nEnter the number of names:";
	cin>>n;
	cout<<"Enter the "<<n<<" names"<<endl;
	data();
	search();
	return 0;
	
}
void data()
{
	for (int i=0;i<n;i++)
		cin>>name[i];
}
void search()
{
	char name1[20];
	int i=0;
	cout<<endl<<"Search the name:\nEnter the name:\n";
	cin>>name1;
	for(;i<n;i++)
	{
		if(strcmp(name1,name[i])==0)
		{
			cout<<"\nThe name "<<name1<<" is present...\n";
		break;
	    }

	}
	if(i==n)
		cout<<"\nThe name "<<name1<<" is not present..\n";
}
