def main():
    n=int(input())
    s=input()
    o=0
    c=0
    d=0
    for i in range(n):
        if s[i] == '(':
            o+=1
        elif s[i]==')':
            c+=1
            if c>o+d:
                d+=1
    
    if o==c and d==0:
        print(0)
    else:
        print(d)


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        main()
