def main():
    l, r, d=map(int, input().split())
    c=0
    for i in range(l,r+1):
        if not i%d:
            c+=1
    print(c)
    # print((r-l+1)//d)


if __name__=='__main__':
    main()
