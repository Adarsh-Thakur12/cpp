def factorial_num(number):
    fac=1
    for i in range(number):
        fac = fac * (i+1)
    return fac
num=int(input("Enter Any Number:"))
print(factorial_num(num))
 