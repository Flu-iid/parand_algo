def check_max_score(s: str, k: int):
    string_map = dict()  # dictionary for charecters of string
    for c in s:
        key = (c.lower(), c.upper())
        string_map.setdefault(key, [0, 0])
        # each dict key consists of a tupple with lowercase and uppercare charecter
        # like ("a", "A")
        # so after we read each char of string, we can evaluate number of upper and lower cases
        # each dict value consists of a list with score for lower and upper
        # [0, 0]
        if c == c.lower():
            string_map[key][0] += 1
        else:
            string_map[key][1] += 1

    base_score = 0  # score achieved from difference between upper and lower letter
    extra_score = 0  # score achieved after k operation

    for key in string_map:
        base_score += min(string_map[key])
        # value is a list data type. so lists minimum, will be set as base score
        # e.g. aaa and AAAAA, it has 3 base_score since it can have 3 a and A pairs
        extra_score += int(abs(string_map[key][1] - string_map[key][0])/2)
        # for values aaa, AAAAA after base score we are left with AA
        # if we use 1 of k to lower on of A, we can get extra score(extra_score)
        # so for each pair we can get extra score if we have k.
    if extra_score >= k:
        return (base_score + k)
    else:
        return (base_score + extra_score)


for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    print(check_max_score(s, k))
