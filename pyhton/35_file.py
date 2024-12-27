f=open('Adarsh.txt','r')
m=f.read()
print(m)
if 'sengar' in m:
    print("Word Sengar is found in the file")
else:
    print("Word Sengar is not found in the file")