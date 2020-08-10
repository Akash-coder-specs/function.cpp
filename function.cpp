#include <iostream>
using namespace std;
int isprime(int n);

int main()
{
	int n,i;
	int flag=1;
	cout<<"Enter the postive number: ";
	cin>>n;
	for(i=0;i<n/2;i++)
	{
		if(isprime(i)==1)
		{
			if(isprime(n-i)==1)
			{
				cout<<i<<"+"<<n-i<<"="<<n<<endl;
				flag==1;
			}
		}
	}
	if(flag==0)
	{
		cout<<"That number cannot be added by two prime numbers.";
	}
	return 0;
}

int isprime(int n)
{
	int flag=1,i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
		else
			flag;
	}
	return flag;
}
