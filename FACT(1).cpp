#include <iostream>
using namespace std;
int main()
{
	float n,p=0;
    cin>>n;
	for(double i=1;i<=n;i++)
	{
		p+=1/i;
	}
	cout<<p;
	return 0;
}
