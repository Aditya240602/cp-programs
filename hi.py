import numpy as np
n1=np.array([14,15,17,28])
n2=np.array([28,30,57,84])
n3=np.array([[12,15,16,75],[18,75,96,55]])
n4=np.array([[15,75,86,94],[75,84,12,47]],[[8,51,65,75],[85,95,66,22]])
def print_arr(arr):
    print(arr)
def opr_arr(arr1,arr2):
    print(np.add(arr1,arr2))
    print(np.subtract(arr1,arr2))
    print(np.multiply(arr1,arr2))
    print(np.divide(arr1,arr2))
def indexing_arr(arr1):
    print(arr1[2])
def twod_arr(arr):
    print(arr[1][1])
def slicing_arr(arr):
    print(arr[1:4:2])
def threed_arr(arr):
    print(arr[1][0][1])
def slicing_threed_arr(arr):
    print(n4[1][0][0:3])
print_arr(n1)
opr_arr(n1,n2)
indexing_arr(n1)
twod_arr(n3)
slicing_arr(n2)
threed_arr(n4)
slicing_threed_arr(n4)
    
