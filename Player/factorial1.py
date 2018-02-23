N=int(input())
    fact=1
    if(N<1):
        print("doesn't exist")
    else:
            for i in range(1,N+1):
                fact=fact*i
    print(fact)
