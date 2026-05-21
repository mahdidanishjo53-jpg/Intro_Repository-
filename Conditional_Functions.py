# 1. We are going to write many different scripts in coding which explains the basics of conditional functions.

a = 100
b = 10

print ("A") if a > b else print("B") if a < b else print ("C") if a == b else print("D")

# 2. In the example above, we have implemented 4 conditions for just on statement mentioned. But we can use words like "AND" and "Or" to set specific conditions too.
x = 12
y = 4
z = 6

if x > y and y < z:
    print("A")
elif x < y or z > x:
    print("B")
elif x == y or z == x:
    print("C")
else:
    print ("None")
# 3. We should clarify every tips together. Also, we have something called nested if where we write one if conditoinal inside another and they are called nested if statement.
i = 60
if i == i:
    print ("I can see two equal quantity")
    if i > 70:
        print("Be here and not try to change")
    elif i == 45:
        print ("=")
    elif i < 60:
        print ("There are so many different ways to learn Python")
    else:
        print("None")
# if , for any reason, you have no any content for your if statement you may use pass to avoid getting errors.

u = 100 
p = 200
if p < u:
    pass
# 4. In python conditional statements, I am going to write some while loops where you first set the condition and then execute the code you have been looking to see the result.

i = 10

while (i < 15)
    print (i)
    i += 1
    