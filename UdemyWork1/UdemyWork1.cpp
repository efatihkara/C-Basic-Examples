#include <iostream>
#include<locale.h>
#include<math.h>

using namespace std;
//işçi problemleri ,hipotenüs hesaplama
int main()
{
	setlocale(LC_ALL, "Turkish");
	/* işçi*/
	cout << "Bir işçi işi kaç günde bitirmektedir ?" << endl;
	int kacgun, kacisci;
	cin >> kacgun;
	cout << " Toplam kaç işçi çalışacak ?" << endl;
	cin >> kacisci;
	cout << "	İşin bitme süresi "<<float(kacgun/kacisci) << " gündür." << endl;
	/* işçi*/
	

	


	return 0;




}
