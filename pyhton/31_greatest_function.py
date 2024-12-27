# Greatest of Three


def greatest(a,b,c):
    if(a>b and a>c):
        print("Greatest Number is a "+ str(a))
    elif(a<b and b>c):
        print("Greatest Number is b "+ str(b))
    else:
        print("Greatest Number is c "+ str(c))
a=int(input("Enter First Number: "))
b=int(input("Enter Second Number: "))
c=int(input("Enter Third Number: "))
greatest(a,b,c)