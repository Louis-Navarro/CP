def solve():
    ab=input()
    ans=ab[0]
    ans+="".join(ab[1:-1:2])
    ans+=ab[-1]
    print(ans)


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        solve()
