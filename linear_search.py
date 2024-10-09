def linear_search(n, arr, key):
    for i in range(n):
        if arr[i] == key : return i
    return -1
    
n = int(input("Enter lenght of list"))

arr = list(map(int, input(f"Enter {n} elements of list seperated by spaces").split()))

key = int(input("Enter the key to find in the list"))

x = linear_search(n, arr, key)

if (x == -1) :
    print(f"{key} not in given list")

else :
    print(f"{key} is at index {x} in the given list")
