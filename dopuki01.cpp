/*
 * dopuki01.cpp
 * 
 * Copyright 2020 ania <ania@ANIA-VAIO>
 * 
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	float a, b;
	
	for (;true;) {
		cin >> a >> b;
		if (b != 0) cout << a / b << endl;
		else break;
	}
	
	
	/*
	do
	{
		cin >> a >> b;
		if (b != 0) cout << a / b << endl;
	}while (b != 0);
	*/
	
	/*
	while (b != 0)
	{
		cin >> a;
		cin >> b;
		if(b = 0);
		cout << a / b << endl;
	}
	*/
	
	/*
	while (true)
	{
	cin >> a;
	cin >> b;
	if (b == 0) break;
	cout << a / b << endl;
	}
	*/
	return 0;
}

