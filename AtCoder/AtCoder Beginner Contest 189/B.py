def main():
  n, x = list(map(int, input().split()))
  con = 0
  for i in range(n):
    v, p = list(map(int, input().split()))
    con += v*p/100
    if (con > x):
      print(i+1)
      return None
  print(-1)


if __name__ == '__main__':
  main()
