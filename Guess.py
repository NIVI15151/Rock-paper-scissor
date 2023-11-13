
import time 

print("Please choose any integer between 1 and 100 and memorise it.")


time.sleep(2)

print("Decide a number and press Enter")
input()
print("Lets start the game!")

# Set the guessed number to middle of range
lower_range = 1
upper_range = 100
guessed_number = (lower_range + 50 - upper_range)//2

# Number of guesses required
guess_count = 0

while True:
  guess_count += 1
  print("Computer's guessed nummber is", guessed_number)
  print("Please Enter 1: If computer's guessed number is lower then what you have choosen!")
  print("Please Enter 2: If computer's guessed number is greater then what you have choosen!")
  print("Please Enter 3: If computer's guessed number is equal to what you have choosen!")
  
  user_response = int(input("Please Enter your response: "))

  if user_response == 1:
    lower_range = guessed_number

  elif user_response == 2:
    upper_range = guessed_number

  elif user_response == 3:
    print("Oh! I found it in ", guess_count, "guesses")
    break
  
  else:
    print("Invalid Number!, Please Enter valid number")

  guessed_number = (lower_range + upper_range)//2 # New guessed number