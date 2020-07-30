def main():
    n=int(input())
    a=list(map(int, input().split()))
    
    mp=(None,None)
    d=0
    for i in range(0, n-1, 2):
        if a[i+1] - a[i] > d:
            mp=(i,i+1)

    a[mp[0]], a[mp[1]] = a[mp[1]], a[mp[0]]

    print(sum(a[::2]))


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        main()
