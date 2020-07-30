def f(n):
    r=0
    fi='0'*len(n)
    while n!=fi:
        cu=n.count('1')
        


def main():
    n=int(input())
    x=input()
    for i in range(n):
        c=x[:i] + '0' if x[i]=='1' else '1' + x[i+1:]
        print(f(c))


if __name__=='__main__':
    main()
