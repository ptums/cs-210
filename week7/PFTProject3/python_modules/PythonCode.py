import re
import string
import os

def get_file_contents():
    dirname = os.path.dirname(__file__)
    filename = os.path.join(dirname, 'CS210_Project_Three_Input_File.txt')
    file = open(filename)
    item_list = file.read().split()
    file.close()

    return item_list

def print_results(item, count):
    return "{}: {} \n".format(item, count)

def strip_word(w):
    return w.lower().strip()

def ReadItemsPurchased():
    item_list = get_file_contents()

    for item in item_list:
        print(print_results(item, item_list.count(item)))

def find_item(word):
    item_list = get_file_contents()

    for item in item_list:
        if strip_word(item) == strip_word(word):
            print(print_results(item, item_list.count(item)))
            break







