#include<iostream>
#include<math.h>
using namespace std;
int UCLN(int a,int b){
    if (a%b!=0)
        return abs(UCLN(b,a%b));
    else
        return abs(b);
}
//---------------------------------------
void Rutgon(int tu, int mau){
   int ucln = UCLN(tu,mau);
    tu=tu/ucln;
    mau=mau/ucln;
    if (mau!=1)
    {
        if (mau<0){
            mau=mau*-1;
            tu=tu*-1;
        }
       cout<<tu<<"/"<<mau;
    }
    else{
      cout<<tu<<"/1 ="<< tu;
    }
}
//------------------------------------------
main()
{
	int a,b;
	cout<<"Nhap tu so: ";
	cin>>a;
	cout<<"Nhap mau so: ";
	cin>>b;
	cout<<"Phan so toi gian: ";
	Rutgon(a,b);
	}