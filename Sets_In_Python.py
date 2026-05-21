# 1. Lists are normally used for information 
new_List = {"Mahdi", "Murtaza", "Ali"}
new_List.update(["Jafar", "Anwar"])
print(new_List)

# 2. We are going to initialize the second stage of that.
lists = {"Mahdi", "Ali", "Murtaza"}

# 3. If you want to add just one item, you may use add. otherwise, you can use update. As the following.

lists.add ("Mobile")
print(lists)

# 4. In case, you decided to add multiple items, you may use update function.
some_lists = {
    "Phones", "Laptops", "TV", 3421312
}
# While using the built-in functions, you may use a curely bracket to tie the elements.
some_lists.update(["Computer", "Mbile phones", "Television"])
print(len(some_lists))
# 5. You can use either remove or discard to delete an element.
mobile_sets = {"iPhone", "Samsung", "Huawei", "IoT"}
mobile_sets.clear()
print(mobile_sets)

set1 = {"a","b","c"}
set2 = {2,3,4,5}
set3 = set1.union(set2)
set3.update(["madh", "fd", "w2"])
print(set3)
# Let's define two new sets for each.

set_4_prac1 = {"com", "mobile"}
set_4_prac2 = {12,32,1,2}
set_4_prac3 = set_4_prac1.union(set_4_prac2)
print(set_4_prac3)
# The takeways: we normally use union to concatenate or join two sets together.

new = ("mahdi", "ali")
them = set(("name", "ali"))
print("You can find everything here", them)
# We can use the set() function, which is built-in to make a set.
