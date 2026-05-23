num = int(input("Enter a number: "))

sum_digits = 0

for digit in str(num):
    sum_digits += int(digit)


print("Sum of digits:", sum_digits)