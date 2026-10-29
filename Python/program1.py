def singleNumber(nums):
    result = 0

    for num in nums:
        result = result ^ num

    return result


nums = [4, 1, 2, 1, 2]
print(singleNumber(nums))
