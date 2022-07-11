def print_formatted(number):
    spaceWidth = len(bin(number).split('b')[1])

    for i in range(1, number + 1):
        print(
            f'{str(i).rjust(spaceWidth, " ")}',\
            f'{str(oct(i).split("o")[1]).rjust(spaceWidth, " ")}',\
            f'{str(hex(i).split("x")[1].upper()).rjust(spaceWidth, " ")}',\
            f'{str(bin(i).split("b")[1]).rjust(spaceWidth, " ")}'
            )

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)