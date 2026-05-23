# Read input
n = int(input())

# Check for negative numbers
if n < 0:
    print("Factorial not defined for negative numbers")
else:
    factorial = 1
    for i in range(1, n + 1):
        factorial *= i
    print(factorial)