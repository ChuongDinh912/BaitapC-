#include<iostream>
#include<mylib.h>
#define MAX 100
using namespace std;
//==============================//
void box(int x, int y, int w, int h)
void main(){
	box(50, 5,20,2);
	_getch();
}
void box(int x, int y, int w, int h)
{
	if(h<=1 || w<=1)return;
	for(int ix = x;ix<=x+w; ix++)
	{
		gotoXY(ix, y);
		cout<<"+";
		gotoXY(ix, y+h);
		cout<<"+";
	}
}