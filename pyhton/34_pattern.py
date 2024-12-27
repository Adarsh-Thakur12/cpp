def pattern(number):
    for i in range(number):
        print("*"*(number-i),end="")
        print("!@#$%^&*()"*(number-i))
        print("#"*(number-i))
number=int(input("Enter any Number: "))
pattern(number)