#!/usr/bin/python3
def main():
    key = ""
    while True:
        key += random.choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-")
        if get_hex_sum(key) > 



def get_hex_sum(s):
    num = 0
    for x in s:
        num += ord(x)

    return num
