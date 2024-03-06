for _ in range(int(input())):
    n = int(input())
    stack = []
    power = 0
    input_list = [int(i) for i in input().split()]
    for s in input_list:
        if s:  # when non-zero number
            stack.append(s)
        else:  # when zero(hero card)
            if stack:  # if stack not empty
                point = max(stack)
                stack.remove(point)
                power += point
    print(power)
