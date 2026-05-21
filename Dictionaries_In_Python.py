# Intro: In this project, we are going to implement using dictionaries in Python.


First_Dictionary = {
    "Name" : "Mahdi",
    "Field": "CS50x",
    "City" : "Kabul",
    "Age"  : 20,

}
# 1. First, we are going to access a value using its key in dictionary.
First_Dictionary.pop("Field")
print(First_Dictionary)

# 2. The second method is using get() function, but we need one more name.

x = First_Dictionary.get("City")
print(x)

second_Dictionary = {
    "Country" : "Afghanistan",
    "Postal_Code" : 10321,
    "District" : "Barchi"
}
second_Dictionary.pop("Postal_Code")
print(second_Dictionary)
y = second_Dictionary.get("Country")
print(y)

# 3. Third phase, we are going to focus on replacing some key values.

Third_Dictionary = {
    "Model:" : "Samsung",
    "Year:" : 2026,
    "Country:" : "Afghanistan",
    "City:" : "Balkh"
}

Third_Dictionary.pop("Year")
print(Third_Dictionary)