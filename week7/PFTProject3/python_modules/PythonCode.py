import re
import string
import os

def ReadItemsPurchased():
    dirname = os.path.dirname(__file__)
    filename = os.path.join(dirname, 'CS210_Project_Three_Input_File.txt')
    file = open(filename)
    list = file.read().split()
    sort_list = sorted(set(list))

    for item in sort_list:
        print(item, " : ", list.count(item), "\n")
    file.close()




