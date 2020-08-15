def main():
    *t, n = map(int, input().split())
    t=list(t)
    for i in range(2, n):
        t.append(t[i-2] + t[i-1]*t[i-1])
    print(t[-1])


if __name__ == '__main__':
    main()
