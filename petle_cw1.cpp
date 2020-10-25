/*
 * petle_cw1.cpp
 * 
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int liczba;
	int suma;
	liczba = 0;
	suma = 0;
	cout <<"Podaj liczbę: ";
	cin >> liczba;
	suma = suma + liczba;
		while(suma <= 75) {
			cout << "Podaj liczbę: ";
			cin >> liczba;
			suma = suma + liczba;
		}
		if(suma >= 75) {
			cout << suma;
		}
	return 0;
}


