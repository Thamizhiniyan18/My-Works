# Task
# You are given a string S.
# S contains alphanumeric characters only.
# your task is to sort the string S in the following manner:
# > All sorted lowercase letters are ahead of uppercase letters.
# > All sorted uppercase letters are ahead of digits.
# > All sorted odd digits are ahead of sorted even digits.

S = input("Enter the String : ")
# lowercase = ''
# uppercase = ''
# odd = ''
# even = ''
# result = []
# for i in S:
#     if i.islower():
#         lowercase += i
#     if i.isupper():
#         uppercase += i
#     if i.isnumeric():
#         if int(i) % 2 == 0:
#             even += i
#         else:
#             odd += i
#
# result.append(sorted(lowercase))
# result.append(sorted(uppercase))
# result.append(sorted(odd))
# result.append(sorted(even))
#
# print(type(sorted(lowercase)))
# print(type(sorted(uppercase)))
# print(type(sorted(odd)))
# print(type(sorted(even)))
# print(sorted(lowercase), sorted(uppercase), sorted(odd), sorted(even))
# print(result)

result = ''.join(sorted(S, reverse=True))
print(result)
