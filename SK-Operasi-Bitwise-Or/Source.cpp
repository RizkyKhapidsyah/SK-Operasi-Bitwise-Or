#include <iostream>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	int a, x, y;
	
	cout << "Masukan Nilai X = ";
	cin >> x;
	cout << "Masukan Nilai Y = ";
	cin >> y;
	
	a = x | y;
	
	cout << "\n";
	cout << "Hasil dari " << x << " | " << y << " = " << a << endl;
	
	_getch();
	return 0;
}