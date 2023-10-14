#include<iostream>
#include<math.h>
using namespace std;
bool Prime(int n)
{
	int dem=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) dem++;		
		 if(dem==0)
		   return true;		  
		  else if(dem>0)
		   return false; 
	}
}
main()
{
	int a;
	cout<<"                                             KIEM TRA SO NGUYEN TO\n ";
	cout<<"Nhap so can kiem tra: ";
	cin>>a;
	if (Prime(a) == true)cout<<a<<" la so nguyen to. ";
	if (Prime(a) == false)cout<<a<<" khong la so nguyen to. ";
}
