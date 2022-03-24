def cntMinSub(arr, N, K):
	
	res = 0
	start = 0
	end = N - 1
	arr = sorted(arr)
	while (end - start > 1):
		if (arr[start] + arr[end] <= K):
			start += 1
		else:
			res += 1
			end -= 1

	if (end - start == 1):
		if (arr[start] + arr[end] <= K):
			res += 1
			start += 1
			end -= 1
		else:
			res += 1
			end -= 1
			
	if (start == end):
		res += 1

	return res

if __name__ == '__main__':

	
	lst = []
	lst = list(map(int,input().strip().split()))[:2]
	N=lst[0]
	K = lst[1]
	arr = []
	arr = list(map(int,input().strip().split()))[:N]
	# print(lst)
	print(cntMinSub(arr, N, K))
