def sum_of_digits_recursive(n):

# Write your code here
 # Base case
    if n == 0:
        return 0
    
    # Recursive case
    return (n % 10) + sum_of_digits_recursive(n // 10)



# Write your code here
# Read input
number = int(input())

# Call function
result = sum_of_digits_recursive(number)	

# Print result
print(result)
