def binpow(a, b):
    res=1
    while b>0:
        if b&1:
            res=res*a
        a=a*a
        b>>=1
    
    return res


def main():
    a=int(input())
    print(a+binpow(a, 2)+binpow(a, 3))


if __name__=='__main__':
    main()
