n = int(input("A number : "))
if n%2!=0:
    print("Weird")
elif n >= 1 and n <= 5 :
    print("Not Weird")
elif n >= 6 and n <= 20 :
    print("Weird")
elif n%2 ==0 and n >= 20:
    print("Not Weird")
n = int(input("enter num"))
for i in range(n):
    print(i+1, end="")
