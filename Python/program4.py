def twoSum(prices, target):
    seen = {}

    for i in range(len(prices)):
        complement = target - prices[i]

        if complement in seen:
            return [seen[complement], i]

        seen[prices[i]] = i


prices = [2, 7, 11, 15]
target = 9

print(twoSum(prices, target))
