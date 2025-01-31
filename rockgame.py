import random
print(" Welcome to rock , paper, scissors game:")
print("0=ROCK, 1=PAPER, 2=SCISSOR")
choices = [0, 1, 2]
userchoice = input("enter userchoice(0 to 2):")
computerchoice = random.choice(choices)
if (userchoice == computerchoice):
    print("It is tie!")

elif((userchoice == 0 and computerchoice == 2) or (userchoice == 1 and computerchoice == 0) or (userchoice == 2 and computerchoice == 1)):
    print("you win!")
elif((userchoice == 2 and computerchoice == 0) or (userchoice == 0 and computerchoice == 1) or (userchoice == 1 and computerchoice == 2)):
    print("you loss!!")

print("userchoice = ", userchoice)
print("computerchoice = ", computerchoice)
