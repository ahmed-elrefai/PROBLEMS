n = int(input())
words = []

for i in range(n):
    words.append(input(""))


for word in words:
    if (len(word) > 10):
        print(f"{word[0]}{len(word) - 2}{ word[-1]}")
    else:
        print(word)
    

