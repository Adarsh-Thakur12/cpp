# Snake Water Gun game
import random
def game(comp,you):
    if comp==you:
        return None
    elif comp=='s':
        if you=='w':
            return False
        elif you=='g':
            return True
    elif comp=='w':
        if you=='g':
            return False
        elif you=='s':
            return True
    elif comp=='g':
        if you=='w':
            return False
        elif you=='s':

            return True
def main():
    print("Computer has choosen")
    number=random.randint(1,3)
    if number==1:
        comp='s'
    elif number==2:
        comp='w'
    elif number==3:
        comp='g'
    you=input("Your turn! Choose between (s)(w)(g): ")
    a=game(comp,you)
    print(f"Computer Chose {comp}" )
    print(f"You Chose {you} " )
    if a==None:
        print("Match Draw!")
    elif a:
        print("You Win!")
    else:
        print("You Loose!")

while True:
    main()