#!/usr/bin/python3
# 100-print_tebahpla.py

""""Print the alphabet in reverse order alternating upper- and lower-case."""
inn = 0
for cum in range(ord('z'), ord('a') - 1, -1):
    print("{}".format(chr(cum - inn)), end="")
    inn = 32 if inn == 0 else 0
