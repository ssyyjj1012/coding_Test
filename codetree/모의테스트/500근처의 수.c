nums = list(map(int,input().split()))
sma = [] 
lar = []
for i in nums:
    if i>500:
        sma.append(i)
    else:
        lar.append(i)

print(max(lar), min(sma))
