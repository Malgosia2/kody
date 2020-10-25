#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Dobry_styl_prog.py
#  

#! /usr/bin/env python
# -*- coding: UTF-8 -*-

import math
	
	op = "t"
	
	
while op != "n":
	a, b, c = input("Podaj 3 boki trójkąta (oddzielone przecinkami): ")
	if a + b > c and a + c > b and b + c > a:
		print("Z podanych boków można zbudować trójkąt.")
	
	if (a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2)
		print("Do tego prostokątny!")
	
		print("Obwód wynosi:", (a + b + c))
	
	p = 0.5 * (a + b + c)
	P = math.sqrt(p * (p - a) * (p - b) * (p - c))
	
	print("Pole wynosi:", P)
	op = "n"
	
		else:
		print "Z podanych odcinków nie można utworzyć trójkąta prostokątnego."
			op = input("Spróbujesz jeszcze raz (t/n): ")

	print "Do zobaczenia..."
	
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
