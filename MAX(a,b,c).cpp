#include<iostream>
using namespace std;
float LONNHAT(float a, float b,float c )
{
    float max= a;
	if(a<b)
	{
	max=b;
    }	
	if(a<c)
    {
	max=c;
    }
  return max;
}
main ()
{
	float a,b,c;
	cin>>a>>b>>c;
	cout<<LONNHAT(a,b,c);
}
