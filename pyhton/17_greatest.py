num1=int(input("Enter the Number 1: "))
num2=int(input("Enter the Number 2: "))
num3=int(input("Enter the Number 3:"))
num4=int(input("Enter the Number4:"))
if(num1>num2 and num1>num2 and num1>num4):
    print("Number 1 is the Greatest",num1)
elif(num2>num1 and num2>num3 and num2>num4):
    print("Number 2 is the Greatest", num2)
elif(num3>num1 and num2<num3 and num3>num4):
    print("Number 3 is the Greatest", num3)
elif(num4>num1 and num4>num3 and num2<num4):
    print("Number 4 is the Greatest", num4)    
else:
    print("Some NUmbers are Equal")
    