# WAP to for calculator
choice=input("Ente the operator: +,-,*,%,/ :- ")
num1=int(input("Enter the Number:"))
num2=int(input("Enter the Number:"))
if(choice=='+'):
    print(num1+num2)
elif(choice=='-'):
    print(num1-num2)
elif(choice=='%'):
    print(num1%num2)
elif(choice=='*'):
    print(num1*num2)
elif(choice=='/'):
    print(num1/num2)