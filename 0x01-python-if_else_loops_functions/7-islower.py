#!/usr/bin/python3
# 7-islower.py


def islower(val):
    """Check for lowercase characters."""
    if ord(val) >= 97 and ord(val) <= 122:
        return True
    else:
        return False
