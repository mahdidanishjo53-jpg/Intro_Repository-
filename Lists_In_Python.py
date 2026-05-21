first_List = ["Mahdi", "Ali", "Murtaza", "Anwar", "Jafar"]
second_list = ["AUAF", "K.P.U", "K.U"]

City_Info = ["Balkh", "Herat", "Bamyan", "Ghazni", "Kabul", "Behsood"]
print(first_List[2])
# 1. In the example above, we have used indexing to access data. So, the output will be Murtaza.

print(second_list[0])
# 2. Output: AUAF

print(first_List[-2])
# 3. We can also use negative indexing which guids us how to access an element from negative point.

print(second_list[-3])
print(City_Info[2:4])
# 4. This way is completely gives us a clear guidance of choosing a range. It works either for sets, list, and tuples.
print(City_Info[:5])

# 5.if you leave the very first value it normally executes the first value. In the example above we will see [Balkh, Kabul]
print(first_List[4:])
print (second_list[-1:-3])
# 6. We can remove an item using pop, and remove functions. Also we can add some elements too using append and insert.
del City_Info[3]

print(City_Info)


City_Info.append("Jeghato")
City_Info.insert(2,"Mahdi")
print(City_Info)

# 7. we may copy our lists too.

third_list = ["Computer", "Laptop", "Mobile","TV","AirCondition"]
my_list = third_list.copy()
print(my_list)

# 8. There are also ways we can join two lists together, one of which is using plus sign.

new_List = first_List + third_list
print(new_List)

first_List.extend(second_list)
print(first_List)

third_list.extend(second_list)
print(third_list)

for add in third_list:
    second_list.append(add)
    print(second_list)
# 9. There is one way we can repeat the elements of a list.
firstList = ["Mahdi"] * 5
print(firstList)
a = [1,2,3,] * 5
b = [4,5,6,7] * 5
print(a)
print(b)

first_List.extend(third_list)
print(first_List)
for item in first_List:
    print(item)
# Output: You will see all the element of the list in a bullet mode.
nested_list = [["Mahdi", "Ali", "Murtaza"], [1,2,3], ['A', 'B','C']]
print(nested_list[2][2])
 
