import re
import string


def double_num(v):
    return v * 2


def create_multiplication_table(num):
    for n in range(1, 11):
        m = n * num
        message = "{} x {} = {}".format(n, num, m)
        print(message)
