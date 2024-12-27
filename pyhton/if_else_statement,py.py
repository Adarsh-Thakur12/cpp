x=int(input("enter marks"))
print("Grade-A"if x>=90 else "Grade-B" if x>=80 and x<=89 else "Grade-C" if x>=70 and x<=79 else "Grade-D" if x>=60 and x<=69 else "Fail")
