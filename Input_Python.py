# 1. Write a program that uses input to prompt a user for their name and then welcomes them.

name = input ("Enter your full name: ")
print('Hello', name)

# 2. Write a program to prompt the user for hours and rate per hour to compute gross pay.
hours = input("Enter working hours: ")
Hours = int(hours)
rates = input("Enter rates and cash: ")
Rates = int (rates)
Total = ((Hours * Rates) + 2) / 2
print("The total amount is: ", Total)

# 3. Assume that we execute the following assignment statements:

width = 17
height = 19

first_half = float (width/3)     
print(f'First half is {10} times than: ',(first_half  ) + 1)

second_half = float (height//2)
print(f"Second_half is {5} times more than: ",(second_half ) + 3)

# 4. Write a program which prompts the user for a Celsius temperature, convert the temperature to Fahrenheit, and print out the converted temperature.

ask_cel = input ("Enter a cel value: ")

try:
    Ask_Cel = int (ask_cel)
    fahrenheit_value = float (Ask_Cel - 32 ) * (5/9)
    print("Temperature is: ",fahrenheit_value)
except:
    print("Enter a value please!!!")

# 5. Rewrite your pay computation to give the employee 1.5 times the hourly rate for hours worked above 40 hours.

Hour = input ("Enter  hours: ")
a = int (Hour)
Rates = input ( "Enter rates: ")
b = int (Rates)

c = float(1.5*10) * (45)

print ('Total hour of working is: ', c)

# 6. Rewrite your pay program using try and except so that your program handles non-numeric input gracefully by printing a message and exiting the program. The following shows two executions of the program:

hour01 = input('Enter hours: ')
rate01 = input ('Enter rates:')

try:
    x = int(hour01)
    y = float(rate01)
    z = float (1.5 * 10) * (45)
    print('The total value is: ', z)

except:
    print("Enter a numeric digit please!!!")

# 7. Write a program to prompt for a score between 0.0 and 1.0. If the score is out of range, print an error message. If the score is between 0.0 and 1.0, print a grade using the following table:
# Score Grade
# >= 0.9 A
# >= 0.8 B
# >= 0.7 C
# >= 0.6 D
# < 0.6 F

prompt01 = input ("Enter a number between 0 and 1 to see your result: ")
x = float(prompt01)

if x >= 0.9:
    print('A')
elif x >= 0.8:
    print("B")
elif x >= 0.7:
    print("C")
elif x >= 0.6:
    print("D")
elif x <= 0.6:
    print("E")
else:
    print("Try again")
