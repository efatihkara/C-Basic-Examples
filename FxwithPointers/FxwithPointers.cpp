

#include <iostream>

using namespace std;
int g(int x)
{//call by reference
	x = 10;
}
int f(int* x)
{//call by reference
	*x = 20;

}

int main()
{
	int a = 10;
	int* p;
	p = &a;
	g(a);
	f(p);
	cout << a<<endl;

}


