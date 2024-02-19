def accept(s: str, n: int):
    guide = "meow"
    check = ""
    for i in range(n):
        check += s[i].lower() if i == 0 or s[i -
                                             1].lower() != s[i].lower() else ""
    return check == guide


for _ in range(int(input())):
    n = int(input())
    s = input()
    print("YES" if accept(s, n) else "NO")
