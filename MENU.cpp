#include "windows.h"
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

#ifdef WIN32

void gotoxy(int x, int y)
{
  COORD cur = {x, y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
} 
#else
void gotoxy(int x, int y)
{
  printf("\033[%dG\033[%dd", x+1, y+1);
}
#endif

int textcolor(int Color)
{
  HANDLE h;
  h = GetStdHandle(STD_OUTPUT_HANDLE); 
  return SetConsoleTextAttribute(h, Color);
}

#define CYAN 10
#define YELLOW 14
//========================================================//
//========================================================//
float Max(float x,float y)
{
  if(x>y) return x;
  else return y;	
}

void Baitap0()
{
  system("cls");
  float a,b;
  cout<<"Nhap a = "; cin>>a;
  cout<<"Nhap b = "; cin>>b;
  cout<<"Max = "<<Max(a,b);
  getch();    
}
//========================================================//
//========================================================//
int UCLN(int a,int b)
{
	if(a==b) return a;
	else if(a>b) return UCLN(a-b,b);
	     else return UCLN(a,b-a);
}

void Baitap1()
{
  system("cls");
  int a,b;
  cout<<"Nhap a = "; cin>>a;
  cout<<"Nhap b = "; cin>>b;
  cout<<"UCLN = "<<UCLN(a,b);
  getch();    	
}
//========================================================//
//========================================================//
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

void Nhap(int &n,int a[])
{
	cout<<endl<<"Nhap n = "; cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<endl<<"A["<<i<<"]=";
		cin>>a[i];
	}
}
//========================================================//
//========================================================//
void Baitap2()
{
  system("cls");
  float a,b,c;
    cout<<"Nhap 3 so: ";
	cin>>a>>b>>c;
	cout<<"So lon nhat trong 3 so la: "<<LONNHAT(a,b,c);
	getch();
}

char LOWER(char c)
{
	return tolower(c);
}

void Baitap3()
{
  system("cls");
  	char a;
	cout<<"nhap chu in hoa :  ";
	cin>>a;
	cout<<"Chu in thuong cua ki tu vua nhap la : "<<LOWER(a);
  getch();  	
}
//========================================================//
//========================================================//
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

void Baitap4()
{
  system("cls");
  int a;
	cout<<"                                             KIEM TRA SO NGUYEN TO\n ";
	cout<<"Nhap so can kiem tra: ";
	cin>>a;
	if (Prime(a) == true)cout<<a<<" la so nguyen to. ";
	if (Prime(a) == false)cout<<a<<" khong la so nguyen to. ";
  getch();  	
}
//========================================================//
//========================================================//
bool nguyento(int n) {
	if (n <= 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n%i == 0)
			return false;
	return true;
}

void Baitap5()
{
  system("cls");
   int n;
	cout<<"Nhap mot so bat ki: ";
	cin >> n;
	for(int i=2;i<=n;i++)
		while (n%i == 0 && nguyento(i) ) {
			cout<<i<<" ";
			n /= i;
		}
  getch();  	
}
//========================================================//
//========================================================//
bool Perfect(int n)
{
	int s=0;
	for(int i=1;i<=n/2;i++)
	{
	    if(n%i==0)s+=i;
	}
			if(s==n) return true;
		else return false;
	}

void Baitap6()
{
	system("cls");
	int a;
	cout<<"Nhap so bat ki: ";
	cin>>a;
	if(Perfect(a)==true)cout<<a<<" la so hoan thien";
	if(Perfect(a)==false)cout<<a<<" khong la so hoan thien";
	getch();
	}
//========================================================//
//========================================================//
int BCNN(int a,int b){
    return (a*b)/UCLN(a,b);
}

void Baitap7()
{
	system("cls");
	int a,b,bcnn;
    cout<<"Nhap 2 so bat ki ";
    cin>>a>>b;
    bcnn = BCNN(a,b);
    cout<<"Boi chung nho nhat cua 2 so tren la "<<bcnn;  
	getch();
	}
//========================================================//
//========================================================//
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

void Baitap8()
{
	system("cls");
	int a,b;
	cout<<"Nhap tu so: ";
	cin>>a;
	cout<<"Nhap mau so: ";
	cin>>b;
	cout<<"Phan so toi gian: ";
	Rutgon(a,b); 
	getch();
	}
//========================================================//
//========================================================//
int Daoso(int n)
{
    int res = 0;
    int tmp;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
   return res;
}

void Baitap9()
{
	system("cls");
    int n;
	cout<<"nhap n ";
    cin >> n;
    cout<<"so sau khi dao la "<<Daoso(n); 
	getch();
	}
//========================================================//
//========================================================//
int Demso(long long n)
{
	int count = 0;
		while(n != 0)
			{
				n /= 10;
				++count;
			}
	return count;
}
void Baitap10()
{
    system("cls");
    long long n;
		cout<<"nhap n ";cin>>n;
		cout<<n<<" co "<<Demso(n)<<" chu so"; 
	getch();
}
//========================================================//
//========================================================//
long long timSoDao(long long n)
{
	long long nSoDao = 0, nRem;

	while (n != 0)
	{
		nRem = n % 10;
		nSoDao = (nSoDao * 10) + nRem;
		n = n / 10;
	}

	return nSoDao;
}
bool Doixung(long long n)
{
	if (n == timSoDao(n))
		return true;
	else
		return false;
}

void Baitap11()
{
    system("cls");
    int n;
	cout << "nhap n= ";
	cin >> n;
	if (Doixung(n))
	{
		cout <<n<< " la so doi xung" << endl;
	}
	else
	{
		cout <<n<< " khong phai la so doi xung" << endl;
	} 
	getch();
}
//Viet xau s ra man hinh tai toa do (x,y) voi mau la color
void Write(char *s,int x,int y, int color)
{
  textcolor(color);
  gotoxy(x,y); cout<<s;
  textcolor(15);
}

void Khung(int x1,int y1,int x2,int y2)
{ int x,y;
  gotoxy(x1,y1); cout<<"=";
  gotoxy(x2,y1); cout<<"=";
  gotoxy(x1,y2); cout<<"=";
  gotoxy(x2,y2); cout<<"=";
  for(x=x1+1;x<x2;x++)
  {
	gotoxy(x,y1); cout<<"=";
	gotoxy(x,y2); cout<<"=";
  }
  for(y=y1+1;y<y2;y++)
  {
	gotoxy(x1,y); cout<<"|";
	gotoxy(x2,y); cout<<"|";
  }
}

/*Tao ra menu tai toa do (x0,y0) voi n dong luu trong bien s
chon: dong menu hien thoi (khac mau voi cac dong khac) */
void Ve_menu(int x0,int y0,int chon,int n,char *s[])
{
  system("cls");
  Khung(x0-2,y0-2,x0+60,y0+n);
  for(int i=0;i<n;i++)
	 if(i==chon) Write(s[i],x0,y0+i,CYAN);
	 else Write(s[i],x0,y0+i,YELLOW);
	Write("Writting Master (c) 2023 by Dinh Le Thanh Chuong.",x0-4,y0+n+6,10);
}

int main()
{
  char ch,*st[20]; //Ghi cac dong menu
  system("cls");
  st[0]="Tim Max(x,y)";
  st[1]="Tim UCLN";
  st[2]="Tim Max(a,b,c)";
  st[3]="Doi chu cai hoa thanh chu cai thuong";
  st[4]="Kiem tra so nguyen to";
  st[5]="Phan tich thanh so nguyen to";
  st[6]="Kiem tra so hoan thien";
  st[7]="Tim BCNN";
  st[8]="Rut gon phan so";
  st[9]="Tim so dao nguoc";
  st[10]="Dem so chu so cua so nguyen duong";
  st[11]="Kiem tra so doi xung";
  st[12]="<ESC> Ket thuc chuong trinh!";
  int x0=5,y0=5,chon=0,luuchon,sodong=13,ok=FALSE;
  Ve_menu(x0,y0,chon,sodong,st);
  do
  {
  ch=getch(); //Nhan mot phim
  switch (ch)
	{
		case 72: //phim len
			luuchon=chon;
			chon--;
			if(chon<0) chon=sodong-1;
			Write(st[luuchon],x0,y0+luuchon,YELLOW);
			Write(st[chon],x0,y0+chon,CYAN);
			break;
		case 80://phim xuong
			luuchon=chon;
			chon++;
			if(chon==sodong) chon=0;
			Write(st[luuchon],x0,y0+luuchon,YELLOW);
			Write(st[chon],x0,y0+chon,CYAN);
			break;
		case 13: //phim ENTER
		ok=TRUE; break;
	}
	if (ok==TRUE) //Neu phim ENTER duoc nhan
	{
	  switch (chon)
		{
		 case 0:
			Baitap0();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 1:
			Baitap1();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 2:
			Baitap2();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 3:
			Baitap3();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 4:
			Baitap4();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 5:
			Baitap5();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 6:
		 	Baitap6();
		 	Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 7:
		 	Baitap7();
		 	Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 8:
		 	Baitap8();
		 	Ve_menu(x0,y0,chon,sodong,st);
			break;	
		 case 9:
		 		Baitap9();
		 	Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 10:
		 		Baitap10();
		 	Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 11:
		 		Baitap11();
		 	Ve_menu(x0,y0,chon,sodong,st);
			break;			
		 case 12: exit(0);
		}
	  ok=FALSE; //tra lai trang thai ENTER chua duoc nhan
	}
  }
  while (ch!=27);//Nhan phim ESC de thoat khoi chuong trinh
}

