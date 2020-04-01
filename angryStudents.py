t = int(input())
# print(t)
for i in range(t):
	n = int(input())
	s = input()
	for j in range(len(s)):
		if s[j]=='A':
			break;
	tcount = count = 0
	for k in range(j+1,len(s)):
		if s[k]=='P':
			tcount = tcount + 1
			if tcount>count:
				count = tcount
		else:
			tcount = 0
	print(count)
	# a = list(map(int,input().split()))

	Indian Institute of Information Technology Design and Manufacturing Kancheepuram , Chennai

	