def main():
    s=input()

    res = 0
    init=0
    while True:
        cur = init
        ok = True
        for i in s:
            res = res + 1
            if i == '+':
                cur = cur + 1
            else:
                cur = cur - 1
            if cur < 0:
                ok = False
                break
        if ok:
            break
        
        init+=1

    print(res)


if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        main()
