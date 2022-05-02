# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter

x = int(input())

shoe_size = input()
shoe_size_list = shoe_size.split()
for i in range(len(shoe_size_list)):
    shoe_size_list[i] = int(shoe_size_list[i])

no_of_customers = int(input())

customer_requirements = []

for i in range(0, no_of_customers):
    size_price = input()
    size_price_list = size_price.split()
    for j in range(len(size_price_list)):
        size_price_list[j] = int(size_price_list[j])
    customer_requirements.append(size_price_list)

# for i in range(len(customer_requirements)):


print('Shoe Size List : ', shoe_size_list)
print(Counter(shoe_size_list))
print('Customer Requirements', customer_requirements)
