# # a=32.42
# # print(type(a))
# a="32"
# a=int(a)
# print(type(a))

a=input("Enter a word :")
word=set(a)
vowels=[a,e,i,o,u,A,E,I,O,U]
for i in word:
    if i in vowels:
        print(i)