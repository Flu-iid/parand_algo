def string_sum(s: str) -> str:
    if len(s) == 1:
        return s
    result = 0
    for c in s:
        result += int(c)
    return string_sum(str(result))


n = input()
print(string_sum(n))


# 2

def crazy_sum(n: int) -> int:
    if n//10 == 0:  # n will be between 0 - 9
        return n
    return crazy_sum(sum([int(c) for c in str(n)]))


n = int(input())
print(crazy_sum(n))

# arsham_mahdiun @Arshamm1997
