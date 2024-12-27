letter='''Dear <|NAME|>,
you are selectd  your ssb is at  allahabad 
you have to reach center  one day before
<|DATE|>'''
name=input("Enter your Name ")
date=input("Enter Date ")
letter=letter.replace("<|NAME|>",name)
letter=letter.replace("<|DATE|>",date)
print(letter)
print(letter.find("  "))
print(letter.replace("  "," "))
