#shallow copy and deep copy

#shallow copy

li1 = [1,2,3,4]
li2 = li1   #shallow copy
print("List = ", li2)

#deep copy

li1 = [1,2,3,4]
li2 = li1.copy() #deep copy
print("List: ", li2)

