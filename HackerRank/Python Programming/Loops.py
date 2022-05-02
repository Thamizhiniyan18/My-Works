# Task
# The provided code stub reads and integer, n, from STDIN. For all non-negative integers i < n, print i^2.

n = int(input("Enter the number to print the squares of that particular number : "))
for i in range(0, n):
    print(i * i)
