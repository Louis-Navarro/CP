def main():
    s=input()
    t=0
    while s:
        c=0
        for i in range(1, len(s)):
            if s[i] != s[i-1]:
                t+=1
                c+=1
                s=s[:i-1] + s[i+1:]
                break

        if not c:
            break

    print('DA' if t&1 else 'NET')


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        main()
