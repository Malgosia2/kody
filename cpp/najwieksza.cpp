/*
 * największa.cpp
 * 
 * Copyright 2020  <>
 * 
 * 
 * Napisz program który pobiera od użytkownika 3 liczby
 * i drukuje największą.
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a;
	int b;
	int c;
	a = 0;
	b = 0;
	c = 0;
	cout << "Podaj pierwszą liczbę: ";
	cin >> a;
	
	cout << "Podaj drugą liczbę: ";
	cin >> b;
	if (b > a) a = b;
	else if (b == a) cout << "liczby są równe";
	cout << "Największa: " << a << endl;
	
	cout << "Podaj trzecią liczbę: ";
	cin >> c;
	if (b > a) a = b;
	else if (b == a) cout << "liczby są równe";
	cout << "Największa: " << a << endl;
	
	if (a > b && a > c) 
		cout << "największa pierwsza liczba "; 
			if (b > a && b > c) 
				cout << "największa druga liczba";
					if (c > a && c > b) 
						cout << "największa trzecia liczba";
						
						 // return 0
	
	
	
	
	

	return 0;
}

