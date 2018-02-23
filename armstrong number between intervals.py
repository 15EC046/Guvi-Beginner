a=int(input())
    b=int(input())
    for i in range(a+1,b+1):
        temp=i
        su=0
        while(temp>0):
            r=temp%10
            su+=r**3
            temp//=10
        if(i==su):
            print(i)
