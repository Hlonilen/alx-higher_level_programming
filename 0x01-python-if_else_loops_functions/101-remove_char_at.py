#!/usr/bin/python3
# 101-remove_char_at.py


def remove_char_at(str, num):
    """Create a copy of the string without the character at position num."""
    if num < 0:
        return (str)
    return (str[:num] + str[num+1:])
