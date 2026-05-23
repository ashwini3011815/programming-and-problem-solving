# Read input
day = int(input())
month = int(input())
year = int(input())

# Function to check leap year
def is_leap_year(year):
    if (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0):
        return True
    return False

# Function to get days in a month
def days_in_month(month, year):
    if month in [1, 3, 5, 7, 8, 10, 12]:
        return 31
    elif month in [4, 6, 9, 11]:
        return 30
    elif month == 2:
        return 29 if is_leap_year(year) else 28
    else:
        return 0

# Validate year
if year <= 0:
    print("Invalid Date")

# Validate month
elif month < 1 or month > 12:
    print("Invalid Date")

# Validate day
elif day < 1 or day > days_in_month(month, year):
    print("Invalid Date")

else:
    # Increment date
    day += 1
    if day > days_in_month(month, year):
        day = 1
        month += 1
        if month > 12:
            month = 1
            year += 1

    # Print in DD-MM-YYYY format (zero-padded)
    print(f"{day:02d}-{month:02d}-{year:04d}")