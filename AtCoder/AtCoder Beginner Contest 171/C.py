import math
import string


def solve():
    ls=string.ascii_lowercase
    n=int(input())
    a=""

    while n>0:
        mod=n%26-1
        a+=ls[mod]
        n=n//26
    print(a[::-1])


if __name__ == '__main__':
    t=1
    for _ in range(t):
        solve()
