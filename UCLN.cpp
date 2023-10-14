#include<iostream>
#include<math.h>
using namespace std;
//---------------------------------------------------//
int UCLN(int a, int b) {
    if (b == 0) return abs(a);
    return abs(UCLN(b, a % b));
}
//------------------------------------------------------//
int main() {
 int a, b;
  cout<<"Nhap hai so: ";
  cin>>a>>b;
  cout<<"uoc chung lon nhat la: "<<UCLN(a,b);
}
