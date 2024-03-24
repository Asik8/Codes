t = int(input())

for _ in range(t):
    a = int(input())
    l = list(map(int,input().split()))
    least = min(l)
    great = max(l)
    least_index = 0
    great_index = 0
    flag1 = False
    flag2 = False
    count = 0
    
    for i,num in enumerate(l):
        if flag1 and flag2:
            break
        
        if num == least:
            least_index = i+1
            flag1 = True
            
        elif num == great:
            great_index = i+1
            flag2 = True
    
    if (least_index+1==great_index and least_index<=a//2 and great_index<=a//2) or (great_index+1==least_index and least_index<=a//2 and great_index<=a//2) :
        print(max(least_index,great_index))
        
    elif (least_index+1==great_index and least_index<=a//2 and great_index>a//2) or (great_index+1==least_index and least_index<=a//2 and great_index>a//2) :
        print(max(least_index,great_index))
        
    elif (least_index+1==great_index and least_index>a//2 and great_index<=a//2) or (great_index+1==least_index and least_index>a//2 and great_index<=a//2) :
        print(max(least_index,great_index))
        
    elif (least_index+1==great_index and least_index>a//2 and great_index>a//2) or (great_index+1==least_index and least_index>a//2 and great_index>a//2) :
        print(a-(min(least_index,great_index)-1))
        
    elif least_index <= a//2 and great_index>a//2 and a%2==0:
        print(least_index+(a-(great_index-1)))
        
    elif least_index <= a//2 and great_index>a//2 and a%2==1:
        print(least_index+(a-(great_index)))
        
    elif least_index > a//2 and great_index<=a//2:
        print(great_index+(a-(least_index-1)))
        
    elif least_index <= a//2 and great_index<=a//2:
        print(max(great_index,least_index))
        
    elif least_index > a//2 and great_index>a//2:
        print(a-(min(least_index,great_index)-1))