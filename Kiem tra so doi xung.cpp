#include <bits/stdc++.h>
using namespace std;
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
main()
{
	int n;
	cout << "nhap n= ";
	cin >> n;
	if (Doixung(n))
	{
		cout << "la so doi xung" << endl;
	}
	else
	{
		cout << "khong phai la so doi xung" << endl;
	}

	return 0;
}
