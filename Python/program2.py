def removeDuplicates(nums):
    seen = set()
    result = []

    for num in nums:
        if num not in seen:
            result.append(num)
            seen.add(num)

    return result


nums = [103, 101, 103, 105, 101, 102]
print(removeDuplicates(nums))
