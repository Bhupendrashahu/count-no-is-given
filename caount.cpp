#include<iostream>
using namespace std;
int main()
{
	int n,n1,a=0;
	cout<<"enter the no \n";
	cin>>n;
	n1=n;
	while(n!=0)
	{
		n/=10;
		a++;
	}
	cout<<a;
}
