#include <iostream>
using namespace std;
int UCLN(int a, int b)
{
	int n;
	if(b>a)
	{ 
	    n=b;
		b=a;
		a=n;	
    }
    int i=b;
    while(i>=1)
    {
	     if(a%i == 0 && b%i == 0)
	         break;
	     i--;
	}
	return i;
}

int BCNN(int a,int b){
    return (a*b)/UCLN(a,b);
}

int main(){
    int a,b,bcnn;
    cout<<"Nhap 2 so bat ki ";
    cin>>a>>b;
    bcnn = BCNN(a,b);
    cout<<"Boi chung nho nhat cua 2 so tren la "<<bcnn;
    return 0;
}
