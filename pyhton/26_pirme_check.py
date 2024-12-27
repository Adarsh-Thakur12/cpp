num=int(input("Enter Any Number:"))
prime=True
for i in range(2,num):
    if (num%i==0):
     prime = False
     break
if prime:
    print("Number is Prime")
else:
   print("Number is Not Prime")



    