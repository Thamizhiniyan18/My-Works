# https://www.codewars.com/kata/545cedaa9943f7fe7b000048/train/python

def is_pangram(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet:
        if char not in s.lower():
            return False
    return True


print(is_pangram("abcdefghijklmopqrstuvwxyz is not a pangram."))
