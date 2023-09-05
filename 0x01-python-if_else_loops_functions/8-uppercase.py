#!/usr/bin/python3
# 8-uppercase.py


def uppercase(str):
    """Print a string in uppercase."""
    for val in str:
        if ord(val) >= 97 and ord(val) <= 122:
            val = chr(ord(val) - 32)
        print("{}".format(val), end="")
    print("")
