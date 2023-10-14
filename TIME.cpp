#include<iostream>
using namespace std;
int main ()
{
	int gio,phut,giay;
	cin>>gio>>phut>>giay;
if(giay == 59)
{
    phut++; giay=0;
    if(phut == 60)
	{
      phut = 0;
      gio++;
    if(gio == 24)
    {
      gio = 0;
    }
    }
}
else giay++;
cout<<gio<<" "<<phut<<" "<<giay;
}