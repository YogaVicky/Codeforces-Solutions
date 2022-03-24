for _ in range(int(input())):
  n, k, x = map(int, input().split())
  x -= 1
  s = input()[::-1]
  res = []
  i = 0
  while i < n:
    if s[i] == 'a':
      res.append(s[i])
    else:
      j = i
      while j + 1 < n and s[j + 1] == s[i]:
        j += 1
      cur = (j - i + 1) * k + 1
      res.append('b' * (x % cur))
      x //= cur
      i = j
    i += 1
  print(''.join(res[::-1]))