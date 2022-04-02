#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	string s;
	const char * p = "kara";
	char c[6] = "kara";
	s = p;
	
	cout << s.size() << endl;//boyutunu gösterme 
	s.append(" sonuna ekleme");
	cout << s << endl;
	cout<<s.substr(2, 8)<<endl;

}