name=input()
pointpossible=int(input())
marks=int(input())
percentscore=(marks/pointpossible)*100
if percentscore>=90:
    print("My name is {} and my grade is A".format(name))
elif percentscore>=80 and percentscore<=89:
     print("My name is {} and my grade is B".format(name))
elif percentscore>=70 and percentscore<=79:
    print("My name is {} and my grade is C".format(name))
elif percentscore>=60 and percentscore<=69:
    print("My name is {} and my grade is D".format(name))
else:
     print("My name is {} and my grade is F".format(name))
   
    
    
