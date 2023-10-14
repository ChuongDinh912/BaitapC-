#include <iostream>
using namespace std;
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
int main(){
    int n;
	cout<<"nhap n ";
    cin >> n;
    cout<<"so sau khi dao la "<<Daoso(n);
}
