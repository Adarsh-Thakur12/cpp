def f1(x):
    return x**3
lst1=list(range(10))
print(list(map(f1,lst1)))
def f2(x):
    return x**0.5
lst2=list(range(10))
print(list(map(f2,lst2)))
# WAP to capatalize each element of list using map
def remove_vowel(word):
    vowels='aeiouAEIOU'
    return ''.join([char for char in word if char not in vowels])

lst3=['rahul','kirti','raj','amit','dipti']
res=map(str.upper,lst3)
print(list(res))
result1=list(map(remove_vowel,lst3))
print(list(result1))