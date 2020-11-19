/*
 * zamien.cpp
 * 
 * 
 */


#include <iostream>
using namespace std;

int zlicz_znaki(char t[]) {
	int i = 0;
	int r = 0;
	while (t[i] = '\0') {
		i;
	} 
	return i; // zwrocenie rozmiaru tekstu
}



int main(int argc, char **argv)
{

char znak;
cin>>znak; 

while(znak!='.') 
{
	if(znak>95) 
	  	cout<<(char)(znak-32); 
	else
		cout<<(char)(znak+32); 
	cin>>znak; 
	
}

cout<<endl;

	rozmiar = 50;
	char znaki[rozmiar];
	for(i=0; i<50; i++) 
	cin >> znaki[i]
	cout << "Wprowadzono " << zlicz_znaki(znaki) << "znaków!";
	return 0;
}

