import re
import string


def double_num(v):
    return v * 2


def create_multiplication_table(num):
    for x in range(1, 11):
        multiple = "{} X {} = {}".format(num, x, (num * x))
        print(multiple)
    return True
