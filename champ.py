num = [2,4,5,4,7,3,9,11,2,7,4,3,2]
temp= 0
for i in range(int(len(num))):
    # ch = int(len(num))
    # # print(ch)
    # if i == ch-1:
    #     break
    if i == 0:
        temp = num[i]
    try:
        # print(num[i],num[i+1])
        if temp < num[i+1]:
            # print(num[i])
            
            temp = num[i+1]
            # print(num[i+1])
            # print(num[i-1])
    except:
        pass
        

        # num[i]= 0
print(temp)       

# num = [4]
# for i in range((len(num))):
#     if num [i] ==0:
#        num [i] =7 
# print(num)

# it is in git ignore file