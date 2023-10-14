#include<iostream>
#include<math.h>
using namespace std;
bool nguyento(int n) {
	if (n <= 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n%i == 0)
			return false;
	return true;
}
int main(){
	int n;
	cout<<"Nhap mot so bat ki: ";
	cin >> n;
	for(int i=2;i<=n;i++)
		while (n%i == 0 && nguyento(i) ) {
			cout<<i<<" ";
			n /= i;
		}
}
