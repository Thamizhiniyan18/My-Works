def solution(s):
    list1 = []
    list1[:0] = s
    if len(list1) / 2 == 0:
        result = [list1[i] + list1[i + 1] for i in range(0, len(list1) - 1, 2)]
        print(str(result))
    else:
        list1.append('_')
        result = [list1[i] + list1[i + 1] for i in range(0, len(list1) - 1, 2)]
        print(result)


solution('abc')
solution('abcdef')
