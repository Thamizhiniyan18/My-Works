def sum_two_smallest_numbers(numbers):
    numbers.sort()
    sumOfNumbers = []
    for x in range(0, 2):
        sumOfNumbers.append(numbers[x])
    print(sum(sumOfNumbers))


a = [19, 5, 42, 2, 77]
sum_two_smallest_numbers(a)
