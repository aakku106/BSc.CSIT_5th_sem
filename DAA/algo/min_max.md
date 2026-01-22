# min-max Algorithm(Divide and Concure)

a:=[]int{9,6,4,7,10,14,8,11}

divide: 
l=0,r=7
mid=3.5=3
left:{9,6,4,7},right:{10,14,8,11}
again for left, 
{9,6},{4,7}

so the concept is to divide array to max 2 element in a array
so finally we get:

{9,6},{4,7},{10,14},{8,11}

now we assign i,j for each array: like
{i:9,j:6}, here i>j; so max:9,min:6
so same for all arrayes, then we compare max-max and min-min of them with 2 2 of them
ie. {9,6},{4,7} & {10,14},{8,11}; we got {9,4}&{14,8}
now again comparing them, we filannly got: { }


[5,4,3,8,11,2,89,23,7]


