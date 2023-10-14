#include<bits/stdc++.h>
using namespace std;
int Demso(long long n)
{
	int count = 0;
		while(n != 0)
			{
				n /= 10;
				++count;
			}
	return count;
}
int main()
{
	long long n;
		cout<<"nhap n ";cin>>n;
		cout<<n<<" co "<<Demso(n)<<" chu so";
}
