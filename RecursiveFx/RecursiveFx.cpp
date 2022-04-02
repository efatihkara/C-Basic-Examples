#include<iostream>
#include<locale.h>

using namespace std;

int faktoriyel(int n)
{
	if (n == 1)
		return 1;
	return n * faktoriyel(n - 1);

	/*
	faktoriyel(6)=6xfaktoriyel(5)
	faktoriyel(5)=6xfaktoriyel(4)
	faktoriyel(4)=6xfaktoriyel(3)
	faktoriyel(3)=6xfaktoriyel(2)
	faktoriyel(2)=6xfaktoriyel(1)
	faktoriyel(1)=1
	*/

}

int kombinasyon(int n, int r)
{
	return faktoriyel(n) / (faktoriyel(r) - faktoriyel(n - r));
}
int main()
{
	setlocale(LC_ALL, "Turkish");

	cout << faktoriyel(6)<<endl;
	cout << kombinasyon(5, 2) << endl;

	
}