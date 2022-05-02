set1 = set()
set2 = set()

sizeOfFirstSet = int(input("\nEnter the size of first set : "))

for i in range(0, sizeOfFirstSet):
    print("Enter the Element ", i + 1, "of the First Set : ")
    n = int(input())
    set1.add(n)


sizeOfSecondSet = int(input("\nEnter the size of second set : "))

for i in range(0, sizeOfSecondSet):
    print("Enter the Element ", i + 1, "of the Second Set : ")
    n = int(input())
    set2.add(n)

symmetric_difference = set1.symmetric_difference(set2)

print("Symmetric Difference of Set One and Set Two is : ", symmetric_difference)


