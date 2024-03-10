for _ in range(int(input())):
    n = int(input())
    stack = []
    power = 0
    input_list = [int(i) for i in input().split()]
    for card in input_list:
        if card:  # when non-zero number
            stack.append(card)
        else:  # when zero(hero card)
            if stack:  # if stack not empty
                point = max(stack)
                stack.remove(point)
                power += point
    print(power)

# arsham_mahdiun @Arshamm1997
