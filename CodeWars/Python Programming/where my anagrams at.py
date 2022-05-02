def anagrams(word, words):
    is_match = sorted(word)
    print(is_match)
    return (w for w in words if is_match == sorted(w))


# anagrams('abba', ['aabb', 'abcd', 'bbaa', 'dada'])
print(anagrams('laser', ['lazing', 'lazy', 'lacer', 'hey']))
