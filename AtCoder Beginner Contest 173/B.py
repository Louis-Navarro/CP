def solve():
    n=int(input())
    d={
        'AC':0,
        'WA':0,
        'TLE':0,
        'RE':0
    }

    for i in range(n):
        si=input()
        d[si]+=1
    
    for k, v in d.items():
        print(f'{k} x {v}')


if __name__=='__main__':
    t=1
    for _ in range(t):
        solve()
