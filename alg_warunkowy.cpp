/*
 * alg_warunkowy.cpp
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int x; // deklaracja i inicjacja
	cout << " Podaj wynik testu: " ;
	cin >> x;
	
		if (x < 0 || x > 60 ) {
	cout << " Błędne dane! " ;
	return  0 ;
}
	// instrukcja warunkowa złożona
		if (x < 20 );
		cout << " Grupa podstawowa " ;
		else  if (x <= 40 );
		cout << " Grupa średniozaawansowana " ;
		else  if (x <= 60 );
		cout << " Grupa zaawansowana " ;
	
	return 0;
}

