print("enter the size")
size=input()
size=int(size)

profits = list()
weights= list()
pw= list()
max_profit=0
print("enter the profits")


for i in range(size):
    x=input()
    x=int(x)
    profits.append(x)

print("enter the corresponding weights")
for i in range(size):
    x=input()
    x=int(x)
    weights.append(x)

#calculate p/w array
for i in range(size):
    x=profits[i]/weights[i]
    pw.append(x)


print("enter the capacity")
c=input()
c=int(c)

while c > 0:
    maximum=max(pw)
    
    index=pw.index(maximum)
    if weights[index]<=c:
        c=c-weights[index]
        max_profit=max_profit+profits[index]
        pw[index]=0
    else:
        max_profit=max_profit+(profits[index]*(c/weights[index]))
        c=c-weights[index]




max_profit=str(max_profit)
print("maximum profit is "+ max_profit)
