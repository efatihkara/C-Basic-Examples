

#include <iostream>
#include<math.h>
#include<locale.h>
using namespace std;


int main()
{
	/* hipotenüs*/

	int a, b, c;
	setlocale(LC_ALL, "Turkish");
	cout << "a kenarını giriniz: " << endl;
	cin >> a;
	cout << "b kenarını giriniz: " << endl;
	cin >> b;
	c = sqrt(a * a + b * b);
	cout << "Hipotenüs c kenarı " << c << endl;

	/* hipotenüs*/
	return 0;

}


