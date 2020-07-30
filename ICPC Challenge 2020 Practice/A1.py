def main(cin, cout):
    n=int(cin.readline().rstrip())
    ns=cin.read().split()
    ns=sorted(map(int, ns))
    cout.write(' '.join(map(str, ns)))


if __name__ == '__main__':
    with open('A1.in') as cin:
        with open('A1.out', 'w') as cout:
            main(cin, cout)
