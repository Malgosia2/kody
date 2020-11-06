#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  cw_funkcje02.py
#  
#  

import math
import statistics
def srednia(tablica, ilosc ilczb):
	srednia = sum(tablica)/ilosc liczb
	print("Średnia wynosi: ", srednia)
	
def mediana(oceny):
	oceny = sorted(oceny) # sortowanie rosnące liczb
	ile = len(oceny)
	if ile % 2 == 0:
		indeks = int(ile / 2)
		mediana = oceny[indeks] + oceny[indeks - 1]
	else:
		indeks =
		mediana = ocen[int(ile / 2)]
	print("Mediana wynosi: ", statistics.mediana(tablica))
	
def main(args):
	ile = 20
	oceny = []
	ocenyile = [0,0,0,0,0,0,0]
	while ile > 0:
		ocena = int(input("Podaj ocene lub zero, aby zakończyć: "))
		if ocena > 0 and ocena < 7:
			oceny.append(ocena)
			ocenyile[oceny]
	ilosc liczb = int(input("Ilość ocen: "))
	if ilosc liczb > 20:
		print("Maksymalna ilość ocen wynosi 20")
		return(ilosc liczb)
		
	tablica = {}
	for i in range(0, ilosc liczb):
		f = int(input("Podaj ocenę: "))
		tablica.append (f)
		
		if  f <= 0 or f > 6:
			print("Wprowadziłeś/aś niepoprawną ocenę!")
			
		return
		
	srednia(tablica, ilosc liczb)
	mediana(tablica)
	
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
