#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	int a;
	a = 5;
	cout << &a<<endl;
	int* p;
	p = &a;
	cout << p<<endl;//a nın adresini gösterir
	cout << *p;//p'nin gösterilen yerdeki değerini gösterecektir

}

/*
cout << &a<<endl;
cout << &a<<endl;
cout << &a<<endl;

*/