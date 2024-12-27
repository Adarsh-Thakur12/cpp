# Write a program to insert n elements in the dictionary and their square in it 
# n=int(input("Enter the value of n:"))
# squares=dict()
# for i in range (1,n+1):
#     squares[i]=i*i
# print(squares)
# WAP to count the frequency of character in your name and name will be given by the input function
name=input("Enter the Name")
freq=dict()
for i in name:
    if i.isalpha():
        if i in freq:
            freq[i]+=1
        else :
            freq[i]=1
print(freq)
