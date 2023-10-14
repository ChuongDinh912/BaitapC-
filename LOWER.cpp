#include<iostream>
#include  <cctype>
using namespace std;
char LOWER(char c)
{
	return tolower(c);
}
main()
{
	char a;
	cout<<"nhap chu in hoa :  ";
	cin>>a;
	cout<<"Chu in thuong cua ki tu vua nhap la : "<<LOWER(a);
}
