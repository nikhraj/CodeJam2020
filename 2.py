#This one is my python solution done on practice mode
n = int(input())
for j in range(0,n):
    temp=''
    a=input()
    temp+='('*int(a[0])
    temp+=a[0]
    for i in range(1,len(a)):
        t=int(a[i])-int(a[i-1])
        if t>0:
            temp+='('*t     
        else:
            temp+=')'*(-t)
        temp+=a[i]
    temp+=')'*int(a[len(a)-1])
    print("Case #{}: {}".format(j+1,temp))
