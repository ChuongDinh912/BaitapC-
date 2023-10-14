#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{ 
 float x1,y1,R,x,y; 
cin>>x1>>y1>>R>>x>>y;
double khoangcach  = sqrt(pow( x -x1, 2)+pow( y - y1, 2));
if(khoangcach<R) 
cout<<"1";
if(khoangcach==R)
cout<<"2";
if(khoangcach>R)
cout<<"3"; 

return 0;
}