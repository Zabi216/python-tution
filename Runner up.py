# arr = [2,3,3,6,5]
# temp= 0
# runner=0

# for i in range(int(len(arr))):
    
#     if (i==0):
      
#         temp = arr[i]
#     try:
   
#         if temp <  arr[i+1]:
#             runner = temp 
#             temp = arr[i+1]
#             # print(runner)
#             # print(temp)
#         if runner < arr[i+1] and temp != arr[i+1]:
#             runner = arr[i+1]
#     except:
#         pass
# print(runner)
# # print(temp)



n = int(input())
arr = map(int, input().split())
arr= list(arr)
# temp= None
# runner=-99999999999
print(sorted(set(arr), reverse=True)[1])
for i in range(int(len(arr))):
    
        if (i==0):
      
            temp = arr[i]
        try:
   
            if temp <  arr[i+1]:
                runner = temp 
                temp = arr[i+1]
        
            if runner < arr[i+1] and temp != arr[i+1]:
                runner = arr[i+1]
        except:
            pass

# print(runner)

