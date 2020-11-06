#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  anagramy.py
#  


def main(args):
	
	napis = "pora"
	for i1 in range(0, 4):
		for i2 in range(0, 4):
			if i1 == i2:
				continue
			for i3 in range(0, 4):
				if i3 == i1 or i3 == i2:
					continue
				i4 = 6 - i1 - i2 - i3
				
				print(napis[i1], napis[i2], napis[i3], napis[i4])
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
