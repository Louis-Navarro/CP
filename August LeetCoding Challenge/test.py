t=int(input())

for _ in range(t):
    # n = int(input())
    # ans=0
    # for i in range(1, n//2+1):
        # ans+=i*i

    # print(ans*8)

    n = int(input())
    n//=2
    ans = n*(n+1)*(2*n+1)//6
    print(8*ans)
