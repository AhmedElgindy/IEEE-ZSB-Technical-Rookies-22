if __name__ == "__main__":
    n = int(raw_input())
    arr = map(int, raw_input().split())
    max1 = arr[0]
    result = []
    for i in range(0, len(arr)):  # loop for finding the max number
        if max1 < arr[i]:
            max1 = arr[i]
    for i in range(0, len(arr)):  # loop to add the new element to new array without max
        if arr[i] != max1:
            result.append(arr[i])
    max1 = result[0]
    for i in range(0, len(result)):  # here finding the max again
        if max1 < result[i]:
            max1 = result[i]
print(max1)
