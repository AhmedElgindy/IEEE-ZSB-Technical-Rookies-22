if __name__ == "__main__":
    n = int(raw_input())
    arr = map(int, raw_input().split())
    max = arr[0]
    result = []
    for i in range(0, len(arr)):  # loop for finding the max number
        if max < arr[i]:
            max = arr[i]
    for i in range(0, len(arr)):  # loop to add the new element to new array without max
        if arr[i] != max:
            result.append(arr[i])
    max = result[0]
    for i in range(0, len(result)):  # here finding the max again
        if max < result[i]:
            max = result[i]
print(max)