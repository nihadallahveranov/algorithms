def print_rangoli(size):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    lines = []
    
    for i in range(size):
        line = '-'.join(alphabet[size - i - 1 : size])[::-1]
        line += line[::-1][1: len(line) // 2 + i + 1]
        line = line.center(4 * size - 3, '-')
        lines.append(line)
        print(line)

    for i in range(len(lines) - 2, -1, -1):
        print(lines[i])

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)