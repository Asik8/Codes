from bisect import bisect_right

n,m = map(int,input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

cumulative_sum= [0]
for i in a:
    cumulative_sum.append(cumulative_sum[-1]+i)

for i in b:
    index = bisect_right(cumulative_sum,i)-1
    if index == 0:
        print(index+1,i)
    else:
        print(index+1,i-cumulative_sum[index])



