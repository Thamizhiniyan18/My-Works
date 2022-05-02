n = int(input("Enter the number : "))
for i in range(1, n + 1):
    multipleOfThree = i % 3
    multipleOfFive = i % 5
    if multipleOfThree == 0 and multipleOfFive == 0:
        print("FizzBuzz")
    elif multipleOfThree == 0 and multipleOfFive != 0:
        print("Fizz")
    elif multipleOfThree != 0 and multipleOfFive == 0:
        print("Buzz")
    elif multipleOfThree != 0 and multipleOfFive != 0:
        print(i)
