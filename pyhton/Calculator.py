first=int(input("Enter First Number: "))
second=int(input("Enter Second Number: "))
operator=input("Enter your operator amoung(+,-,*,/): ")
if operator=='+':
    print("Sum of two Numbers is: "+str(first+second))
elif operator=='-':
    print("Difference of two Numbers is: "+str(first-second))
elif operator=='*':
    print("Multiplication of two Numbers is: "+str(first*second))
elif operator=='/':
    print("Division of two Numbers is: "+str(first/second))
else:
    print("Thank you for using calculator")
