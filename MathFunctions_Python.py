import math


input_massege_01 = float(input("Enter the value: "))
output_massege_01 = round(float(math.pi * pow(input_massege_01, 2)), 2)
print(f"The ultimate value of circumfrance is {output_massege_01} cm^2")

input_massege_02 =float(input("Enter a value A: "))
input_massege_03 = float(input("Enter a value B: "))
result = float ("The value is: ", pow(input_massege_02,2) + pow(input_massege_02,2))
print(f"The result of {result} is: ", math.sqrt(result), "cm^2")



# 1. Execute some constant math values insite the math library.
print(math.pi)
print(math.e)
# 2. Execute the input value out of the math library.

x = 16
print(math.sqrt(x))

y = 25
print(math.sqrt(y))

z = 81
print(math.sqrt(z))

h = 100
print(math.sqrt(49))

j = 121 
print(f"The exact squared value of {j} is: ", math.sqrt(j))

math_value = 144
print(f"The ultimate answer of {math_value} is: ", math.sqrt(math_value))

exact_Value = 169
print(f"The final value of {exact_Value} in your function is: ", math.sqrt(exact_Value))

