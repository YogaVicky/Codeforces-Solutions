t = int(input())
for i in range(t):
	n = int(input())
	n=n-1
	c = 8
	sum=0
	k=1
	while(n>0):
		sum+=c*k
		k=k+1
		c=c*2
		n = n-2
	print(sum)