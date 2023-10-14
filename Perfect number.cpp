#include<iostream>
using namespace std;
bool Perfect(int n)
{
	int s=0;
	for(int i=1;i<=n/2;i++)
	{
	    if(n%i==0)s+=i;
	}
			if(s==n) return true;
		else return false;
	}
int main()
{
	int a;
	cin>>a;
	if(Perfect(a)==true)cout<<a<<" la so hoan thien";
	if(Perfect(a)==false)cout<<a<<" khong la so hoan thien";
}
