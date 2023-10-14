#include<iostream>
using namespace std;
int main ()
{
	int ngay, nam;
	int thang;
	cin>>ngay;
	cin>>thang;
	switch(thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10:
			cin>>nam;
			if(ngay==31 )
				cout<<1<<" "<<thang+1<<" "<<nam;
			else if(0<ngay<31)
			    cout<<ngay+1<<" "<<thang<<" "<<nam;
			break;
		case 12:
			cin>>nam;
			if(ngay==31 )
				cout<<1<<" "<<1<<" "<<nam+1;
			else if(0<ngay<31)
			    cout<<ngay+1<<" "<<thang<<" "<<nam;
			break;
		case 2:
			cin>>nam;
			if(nam % 4 == 0&&nam % 100 !=0)
			  { 
			    if(ngay ==29)
			       cout<<1<<" "<<3<<" "<<nam;
                else if(0<ngay<=28)
                    cout<<ngay+1<<" "<<thang<<" "<<nam;
               }
            else if(nam%400==0)
               {
            	if(ngay ==29)
			       cout<<1<<" "<<3<<" "<<nam;
                else if(0<ngay<=28)
                    cout<<ngay+1<<" "<<thang<<" "<<nam;
                }
            else {
            	if(ngay==28)
            	cout<<1<<" "<<3<<" "<<nam;
            	else if(0<ngay<=27)
                    cout<<ngay+1<<" "<<thang<<" "<<nam;
			}
			break;
			
		case 4: case 6: case 9: case 11:
			cin>>nam;
			if(ngay==30)
			cout<<1<<" "<<thang+1<<" "<<nam;
			else if(0<ngay<30)
            cout<<ngay+1<<" "<<thang<<" "<<nam;
            break;
			}
        }
        
    
