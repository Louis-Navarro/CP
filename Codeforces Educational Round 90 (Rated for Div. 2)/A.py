def main():
    a, b, c=map(int, input().split())
    
    if a<c:
        print('1', end=' ')
    else:
        print('-1', end=' ')

    if c < b*a:
        print(b)
    else:
        print('-1')


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        main()
