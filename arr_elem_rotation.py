def arrayRotate(arr,n,k):
    for i in range(k):
        temp = arr[0]
        for x in range(n-1):
            arr[x] = arr[x+1]
        arr[n-1] = temp


def printArray(arr,n):
    for i in range(0,n):
        print(arr[i],end=' ')


n = int(input("Enter the no of elements of the array"))
print("Enter the elements")
arr = []
for i in range(0,n):
    element = int(input())
    arr.append(element)
k = int(input("Enter the no of times you want to rotate the array"))
arrayRotate(arr,n,k)
printArray(arr,n)
