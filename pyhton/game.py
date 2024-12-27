import random
number = random.randint(1, 100)
guess = None
nattempt = 1

while (guess != number):
        guess = int(input("Enter any Number: "))
        if guess < number:
            print("Greater Number Please")
        elif guess > number:
            print("Lower Number Please")
        else:
            print(f"You Won! Congratulations!\nYou guessed it in {nattempt} attempt(s).")
        nattempt += 1