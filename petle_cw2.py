#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  


def main(args):
	
	n = int(input ("Podaj początek zakresu: "))
	m = int(input ("Podaj koniec zakresu: "))
	for liczba in range (n,m +1):
		print(liczba)
	
	
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
