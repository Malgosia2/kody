/*

 */


#include <iostream>

#include <math.h>

using namespace std;


void liczIle  (float lokata, float procent, int m) {
	float oprocMies = procent/12/100;
	for (int i=0; i < m; i++) {
		lokata += lokata * oprocMies;
	}
}


int main(int argc, char **argv) {
	float i = 0;
	float a = 0;
	int czas = 0; 
	float sklad = 0;
	
	cout << "Podaj kapitał początkowy: ";
	cin >> i;
	
	cout << "Podaj oprocentowanie w skali roku: ";
	cin >> a;
	
	cout << "Podaj okres oszczędzania (liczbę miesięcy): ";
	cin >> czas;
	
	sklad = a;
	liczIle(sklad, x, czas);
	cout << "W ciągu " << czas << "miesięcy przy kapitale początkowym " << i << " i oprocentowaniu miesięcznym " << a/12 << "Zaoszczędzisz: " << sklad << " zł";

	return 0;
}


