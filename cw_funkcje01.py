#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  

def awans(lata, zarobek, staz):
	for in range (lata - 1):
		staz += 1
		zarobek = zarobek + 0.1*zarobek
		return zarobek, staz
		
def drukuj (staz, zarobek):
	print ("Po ", staz , " latach stażu będziesz zarabiał/a: ", zarobek)
	
	
def main(args):
	
	staz = 1
	zarobek = 100
	
	lata = int(input("Podaj przewidywana ilość lat pracy: "))
	zarobek, staz = awans(lata, zarobek, staz)
	drukuj(staz, zarobek)
	
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
