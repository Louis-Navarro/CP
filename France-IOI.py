def main():
    mp= lambda m: m/0.3048
    gl= lambda g: g*0.002205
    cf = lambda c: 32+1.8*c

    v=input()
    u=v[-1]
    v=float(v[:-2])
    
    if u == 'm':
        print(f'{mp(v):.6f} p')
    elif u == 'g':
        print(f'{gl(v):.6f} l')
    elif u == 'c':
        print(f'{cf(v):.6f} f')


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        main()
