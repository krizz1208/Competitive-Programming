def binarySearch(arr, target):
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid = (low + high) // 2

        if arr[mid] == target:
            return mid

        elif arr[mid] < target:
            high = mid - 1

        else:
            low = mid + 1

    return -1


arr = [90, 75, 60, 45, 30, 15]
target = 45

print(binarySearch(arr, target))
