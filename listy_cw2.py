#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  listy_cw2.py
#  

def pobierzliczby(lista1):
	for i in range(5):
		a = int(input("Podaj liczbę: "))
		lista.append(a)
		
		
def pobierzliczby2(lista2):
	for i in range(5):
		b = int(input("Podaj liczbę: "))
		lista.append(b)
		
		
def suma(a, b):
	suma1 = 0
	suma2 = 0
	for a in lista1 :
		suma1 += a 
	for b in lista1 :
		suma2 += b
		
	return suma1, suma2

def main(args):
	
	lista1 = []
	lisra2 = []
	pobierzliczby(lista1)
	print("Druga seria liczb")
	pobierzliczby(lista2)
	print(lista1)
	print(lista2)
	suma1, suma2 = suma(lista1, lista2)
	print("Suma w liście pierwszej wynosi: ", suma1)
	print("Suma w liście drugiej wynosi: ", suma2)
	if suma1 > suma2:
		print("Lista pierwsza jest większa od listy drugiej.")
	if suma1 = suma2:
		print("Te listy są równe.")
	else
		print("lista druga jest większa od listy pierwszej.")
	
	
	
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
