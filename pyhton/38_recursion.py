def series(n):
    return series(n-1)+series(n-2)
     
num=int(input("Enter the number you want series of: "))
a=series(num)
print(a)