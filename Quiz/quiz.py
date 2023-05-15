playing = input("Do you want to play? ")

if(playing != "yes"):
    quit()

print("Note if you want to exit type = quit\'s")
print("\nOkay let's play :)")

# Your score
score = 0

#this questions
answer = str(input("\nWhat does CPU for? "))
if(answer == "central processing unit"):
    print('Correct!')
    score += 1
elif(answer == "central process units"):
    print("Almost true")
elif(answer == "quit"):
    quit()
else:
    print("Incorrect!)")

#2
answer = str(input("\nWhat does GPU stand for? "))
if(answer == "graphics processing unit"):
    print('Correct!')
    score += 1
elif(answer == "graphical processing unit"):
    print("Almost true")
elif(answer == "quit"):
    quit()
else:
    print("Incorrect!")

#3
answer = str(input("\nRAM stand for? "))
if(answer == "random access memory"):
    print('Correct!')
    score += 1
elif(answer == "read a memory"):
    print("Almost true")
elif(answer == "quit"):
    quit()
else:
    print("Incorrect!")

#4
answer = str(input("\nWhat does PSU stand for? "))
if(answer == "power supply"):
    print('Correct!')
    score += 1
elif(answer == "power supplier"):
    print("Almost true")
elif(answer == "quit"):
    quit()
else:
    print("Incorrect!")

#5
answer = str(input("\nWhat does HTML stand for? "))
if(answer == "hyper text markup language"):
    print('Correct!')
    score += 1
elif(answer == "hyper text marqup language"):
    print("Almost true")
elif(answer == "quit"):
    quit()
else:
    print("Incorrect!")

import os
#clear_screen
os.system('cls')

print("Result :")
print("You got " + str(score) + " questions correct!")
print("You got " + str((score / 5) * 100) + "%.")