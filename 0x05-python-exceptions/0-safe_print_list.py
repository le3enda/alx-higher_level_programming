#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    i = 0
    while i is not x:
        try:
            print(my_list[i], end="")
            i += 1
        except IndexError:
            None
    print()
    Return i
