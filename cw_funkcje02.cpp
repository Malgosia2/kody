/*
 * cw_funkcje02.cpp
 * 
 */

#include <iostream>
using namespace std;


void srednia(float suma, float ilosc liczb) {
	float srednia = suma / ilosc liczb;
	cout << "srednia wynosi: " << srednia << endl;
}

void mediana(float * tab, int ilosc liczb) {
	float mediana;
	if(ilosc liczb % 2 == 0) {
		mediana = ( tab[ilosc liczb /2 - 1] + tab[ilosc liczb /2]) /2;
	} else {
		mediana = tab[ilosc liczb /2] ;
	}
	cout <<"Mediana wynosi: " << mediana << endl;
}

int main(int argc, char **argv)
{
	int t = 0;
	int ilosc liczb = 0;
	int * tab = new int [ilosc liczb];
	cout << "Ilość liczb: ";
	cin >> ilosc liczb;
	
	if(ilosc liczb > 20) {
		cout <<"Maksymalna ilość ocen wynosi 20" << endl;
	
	return 0;

	float tablica[ilosc liczb];
	int suma = 0:
	for (int i = 0; i < ilosc liczb; ++i)
{
		cout << "Podaj ocenę: " <<(i + 1) << " : ";
		cin >> tablica [i];
		if(tablica [i] < 1 || tablica [i] > 6) {
			cout << "Wprowadziłeś/aś niepoprawną ocenę!" << endl;
			return 0
	}
		suma += tablica[i]
}
	int v;
	int x;
	for(v = 0; v < ilosc liczb; ++v)
	{
				for(x = v + 1; x < ilosc liczb; ++x)
		{
			if(tablica [v] > tablica [x])
			{
				t = tablica [v]
				tablica [v] = tablica [x];
				t = tablica [x];
			}
		}
	}
	srednia (suma, ilosc liczb);
	mediana (tablica, ilosc liczb);
	
	
	return 0;
}
