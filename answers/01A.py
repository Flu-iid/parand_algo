# 1
a, b, c = map(int, input().split())
if (a and b and c) and (a + b + c == 180):
    print("Yes")
else:
    print("No")


# 2
angles = [int(i) for i in input().split()]
print("Yes" if all(angles) and sum(angles) == 180 else "No")

# arsham_mahdiun @Arshamm1997
