def solve():
    n=int(input())
    for i in range(n//2, 0, -1):
        if i*2<=n:
            print(i)
            break


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        solve()
