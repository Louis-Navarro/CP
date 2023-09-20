def main():
    n=int(input())
    if n==1:
        print(0)
    elif n%3:
        print(-1)
    else:
        c=0
        while n>1:
            if not n%6:
                n//=6
                c+=1
            elif not n%3:
                n*=2
                c+=1
            else:
                break
        if n==1:
            print(c)
        else:
            print(-1)


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        main()
