import re
import string
import os

def get_file_contents(file):
    dirname = os.path.dirname(__file__)
    filename = os.path.join(dirname, file)
    file = open(filename)
    item_list = file.read().split("\n")
    file.close()

    return item_list

def print_results(item, count):
    return "{} {}".format(item, count)

def strip_word(w):
    return w.lower().strip()

def ReadItemsPurchased():
    item_list = get_file_contents('CS210_Project_Three_Input_File.txt')

    for item in item_list:
        print(print_results(item, item_list.count(item)))

    return True

def FindItem(word):
    item_list = get_file_contents('CS210_Project_Three_Input_File.txt')

    for item in item_list:
        if strip_word(item) == strip_word(word):
            print(print_results(item, item_list.count(item)))
            return True

    return True

def CreateHistogram():
    item_list = get_file_contents('CS210_Project_Three_Input_File.txt')
    dat_file = open("frequency.dat", "w")

    for item in item_list:
        format_item = print_results(item, item_list.count(item)) + "\n"
        dat_file.write(format_item)
    dat_file.close()

    return True

def ReadHistogram():
    item_list = get_file_contents('../frequency.dat')

    for item in item_list:
        print(item)

    return True











