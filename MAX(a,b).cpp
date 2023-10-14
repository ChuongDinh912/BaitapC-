#include<iostream>
using namespace std;
float MAX(float x, float y)
{
    float max=x;
	if(y>x)
    {
    	 max=y;
	}
	return max;
}
main()
{
	float a,b;
	cin>>a>>b;
	cout<<MAX(a,b);
}
