#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petle_cw4.py
#  
#  


def main(args):
	
	n = int(input ("Podaj początek zakresu: "))
	m = int(input ("Podaj koniec zakresu: "))
	for n in range (10,m):
		if n % 3 == 0 and n % 2 == 0:
			print (n)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
