#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  alg_warunkowy.py
#  


def main(args):
	
	w = int(input("Podaj liczbę punktów ucznia: "))
	if(w < 0 and w > 60):
		print ("Błędne dane!")
		elif (w < 20):
			print("Grupa podstawowa")
		elif (w >= 20 and w <= 40):
			print("Grupa średniozaawansowana")
		else:
			print("Grupa zaawansowana")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
