a, b = input().split()
print("Yes" if a > b else "No")

# python takes string values with input.
# use split to turn space-seperated values into list.
# unzip 2 values to a and b using it like above.
# since given values are guaranteed to be more than or equal to 1 -
# - you can easily use string comparison just like int
# e.g. "1" < "2" acts exactly like 1< 2 or
# "1" < "10" is again like 1 < 10

# if it feels complicated your free to use with int like below:
# a, b = [int(i) for i in input().split()]
# print("Yes" if a > b else "No")
