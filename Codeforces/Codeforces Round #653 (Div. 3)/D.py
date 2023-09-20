def main():
    n, k=map(int, input().split())
    a=list(map(int, input().split()))
    x=0
    m=0
    d=[]
    for i in range(n):
        mod=i%k
        if mod in d:
            mod+=k
        d.append(mod)
        m=max(mod, m)

    print(m)


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        main()
