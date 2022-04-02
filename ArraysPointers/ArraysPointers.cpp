#include<iostream>
#include<Windows.h>


using namespace std;

int main()
{
	int a = 10;
	int* p;
	p = &a;
	cout << "a: " << a<<endl;
	cout << "*p: " << *p << endl;
	cout << "&a: " << &a << endl;
	cout << "p: " << p << endl;
	cout << "&p: " << &p << endl;
	//system("Color 16");

	int x[3] = {1,2,3};
	int* q;
	q = x;
	cout << q[2] << endl;
	q[2] = 16;
	//pointer ile dizi içerisindeki arrayslere etkin bir şekilde kullanım verebiliyoruz

	cout << x[2]<<endl;
}