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
	
def mediana(tablica):
	print("Mediana wynosi: ", statistics.mediana(tablica))
	
def main(args):
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
