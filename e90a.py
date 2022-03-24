for tc in range(int(input())):
	a, b, c = map(int, input().split())
	print(1 if a < c else -1, end=" ")
	print(b if c < a * b else -1)