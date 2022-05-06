# This Program replaces each and ever letter in a given string or word to its numerical equivalent
# Example : "a" = 1, "b" = 2, etc.



def alphabet_position(text):
    list1 = []
    list1[:0] = text.lower()
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    alphabetPosition = []
    alphabetList = []
    alphabetList[:0] = alphabet
    for letter in list1:
        if letter not in alphabet:
            list1.remove(letter)

    for letter in list1:
        if letter in alphabetList:
            alphabetPosition.append(alphabetList.index(letter) + 1)

    return ' '.join(str(x) for x in alphabetPosition)


string = input("Enter the desired sentence : ")
result = alphabet_position(string)
print(result)

