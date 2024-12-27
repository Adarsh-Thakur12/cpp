                                        # Program 1
print('start of code')
x=input('enter 1 no:')
y=input('enter 2 no :')
try:
        z=int(x)/int(y)
        print(z)
except(ZeroDivisionError,ValueError) as msg:
        print(type(msg))
        print(msg)
        print('Invalid data')
print('rest of code')

                                        # Program 2
print('start of code')
m=input('enter number 1 ')
n=input(' enter number 2')
try:
        
