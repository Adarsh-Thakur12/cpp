## First
squares = [x*x for x in range(1, 11)]
print(squares)
## Second
even_compr = [x for x in range(1, 21) if x%2 == 0]
print(even_compr)

## Third
dby2and3 = [x for x in range(1, 21) if x%2 == 0 and x%3 == 0]
print(dby2and3)

## Fourth
given_names = ["manish", "deepak", "arjun"]
up_names = [x.upper() for x in given_names]
print(up_names)

## Fifth
x=[1,2,3]
y=[4,5]
new_list=[(i,j) for i in x for j in y]
print(new_list)

##Sixth
ls=[[1,2],[3,4],[5,6]]
flat=[x for y in ls for x in y]
print(flat)

# Seven
word='beautiful'
vowels="".join([v for v in word if v.lower() not in "aeiou"])
print(vowels)