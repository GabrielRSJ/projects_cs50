while True:
    try:
        n = int(input("height: "))
        if n < 1 or n > 8:
            print("error")
        else:
            break
    except ValueError:
        print("error")

for c in range(n):
    spaces = n - c - 1
    bricks = c + 1
    for c in range(spaces):
        print(" ", end='')
    for c in range(bricks):
        print("#", end='')
    for c in range(1):
        print("  ", end='')
    for c in range(bricks):
        print("#", end='')
    print()
