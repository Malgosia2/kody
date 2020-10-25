/*
 * petle_cw3.cpp
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n;
	int k;
	
	{
		cout << "Podaj liczbę liczb n = ";
		cin >> n;
	}while (n <= 0) ;
	for(int k = 1; k <= n; k++)
	cout << k*k << endl;
	
	return 0;
}

