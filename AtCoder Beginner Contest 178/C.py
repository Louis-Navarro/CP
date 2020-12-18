def main():
    M=int(1e9+7)
    n=int(input())
    ans = 8**(n-2)%M
    ans *= (n*(n-1))%M
    ans += (2*n-1)

    print(int(ans%M))


if __name__=='__main__':
    main()
