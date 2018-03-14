print("enter number to find factors:")
a=int(input())
def factors(n):
  for i in range(2,n+1):
    if n%i==0:
      print(i)

factors(a)
  
