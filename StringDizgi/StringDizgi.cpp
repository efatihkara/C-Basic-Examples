#include<iostream>

using namespace std;

int main()
{
	const char *s = "kara";
	cout << s << endl;
	cout << s[1] << endl;
	const char c[5] = "kara";
	char a[5];
	a[0] = 'e';
	a[1] = 'f';
	a[2] = 'k';
	cout << c << endl;
	cout << a << endl;
}