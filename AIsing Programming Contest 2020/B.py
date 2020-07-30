def main():
    n=int(input())
    a=list(map(int, input().split()))
    c=0
    for i in range(n):
        if (a[i]%2) and ((i+1)%2):
            c+=1
    print(c)


if __name__=='__main__':
    main()
