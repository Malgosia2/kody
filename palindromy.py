#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  palindromy.py
#  


def main(args):
	
	a = input("Podaj słowo: ")
	i = 0
	b = len(w) - 1
	jest = True
	while(i < j and jest):
		if(a[i] != a[b]):
			jest = False
		i = i + 1
		b = b - 1
	if(jest):
		print("To jest palindrom!")
	else: 
		print("To nie jest palindrom!")
	
	
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
