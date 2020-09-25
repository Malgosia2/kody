/*
 * trojkat.cpp
 * 
 * Copyright 2020  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * trojkat.cpp
 * 
 * Napisz program, który sprawdza, czy z trzech boków podanych
 * przez uzytkownika, można zbudować trójkąt.
 * Na końcu wyprowadź odpowiedni komunikat, np. "da się"
 * lub "nie da sie".
 * 
 */


#include <iostream>

int main(int argc, char **argv)
{
	int bok1; //deklaracja zmiennej
	int bok2; //deklaracja zmiennej
	int bok3; //deklaracja zmiennej
	bok1 = 0; // inicjacja zmiennej
	bok2 = 0; // inicjacja zmiennej
	bok3 = 0; // inicjacja zmiennej
	cout << "Podaj bok1: ";
	cin >> bok1
	cout << "Podaj bok2: ";
	cin >> bok2
	cout << "Podaj bok3: ";
	cin >> bok3
	/*
	 * 
	if (bok1 + bok2 > bok3) {
		if (bok1 + bok3 > bok2) {
			if (bok2 + bok3 > bok1)
				cout << "da się";
					// return 0;
			 } else {
				cout << "nie da się";
			}
		}else{
			cout << "nie da się";
	}
	} else {
		cout << "nie da się";
	}
	
	// cout << "nie da sie";
	*/
	if (bok1 + bok2 > bok3 && bok1 + bok3 > bok2 && bok2 + bok3 > bok1) {
		cout << "da się";
	} else {
	
	 cout << "nie da się";
	}
	return 0;

}

