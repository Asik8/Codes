# Python3 implementation to find the length
# of longest subArray having sum k

# function to find the longest
# subarray having sum k
def lenOfLongSubarr(arr, n, k):

	# dictionary mydict implemented
	# as hash map
	mydict = dict()

	# Initialize sum and maxLen with 0
	sum = 0
	maxLen = 0

	# traverse the given array
	for i in range(n):

		# accumulate the sum
		sum += arr[i]

		# when subArray starts from index '0'
		if (sum == k):
			maxLen = i + 1

		# check if 'sum-k' is present in
		# mydict or not
		elif (sum - k) in mydict:
			maxLen = max(maxLen, i - mydict[sum - k])

		# if sum is not present in dictionary
		# push it in the dictionary with its index
		if sum not in mydict:
			mydict[sum] = i

	return maxLen

t = int(input())

for _ in range(t):
    n,s = map(int,input().split())
    arr = list(map(int,input().split()))
    print("Length =", lenOfLongSubarr(arr, n, s))

