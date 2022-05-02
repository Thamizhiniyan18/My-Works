# https://www.codewars.com/kata/5d98b6b38b0f6c001a461198/train/python

"""
def code(strng):
    binaryTable = ['10', '11', '0110', '0111', '001100', '001101', '001110', '001111', '00011000', '00011001']
    decimal = []
    decimal[:0] = strng
    print("1 : ", decimal)
    x = 0
    for number in decimal:
        decimal[x] = binaryTable[int(number)]
        x += 1
    result = ''.join(str(i) for i in decimal)
    print(result)

    code("77338855")  # --> "001111 001111 0111 0111 00011000 00011000 001101 001101"
    code("77338")  # --> "001111 001111 0111011100011000"
    code("0011121314")  # --> "10 10 11 11 11 0110 11 0111 11 001100"

"""


def decode(strng):
    binaryTable = ['10', '11', '0110', '0111', '001100', '001101', '001110', '001111', '00011000', '00011001']
    strng.split()
    print(strng)


decode("001111001111011101110001100000011000001101001101")  # -> "77338855"
decode("0011110011110111011100011000")  # -> "77338"
decode("1010111111011011011111001100")  # -> "0011121314"
