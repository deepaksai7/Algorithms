print("enter the size")
size=input()
size=int(size)
net=0
#defining lists
profits=list()

deadline=list()
sequence=list()

#taking input from the user
print("enter profits")
for i in range(size):
    x=input()
    x=int(x)
    profits.append(x)

print("enter  deadlines")
for i in range(size):
    x=input()
    x=int(x)
    deadline.append(x)

for i in range(size):

    sequence.append(999)


maxx=max(deadline)
for i in range(maxx):
    max_profit=max(profits)
    index=profits.index(max_profit)
    if sequence[deadline[index]] == 999:
        sequence[deadline[index]]=index
        net=net+profits[index]
        profits[index]=0
    else:
        j=index
        while j>=0:
            if sequence[j]==999:
                sequence[j]=index
                net=net+profits[index]
                profits[index]=0
                break
            else:
                j=j-1

print("sequence array")
for i in sequence:
    if i!=999:
        print(i)

net=str(net)
print("net profit is: "+net)
