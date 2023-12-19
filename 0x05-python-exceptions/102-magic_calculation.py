#!/bin/user/python3
def magic_calculation(a, b):
    x = 0
    for i in range(1, 3):
        try:
            if i > a:
                raise Exception('Too far')
            x += a ** b / i
        except Exception:
            x = a + b
            break
        return x
