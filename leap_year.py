year = int(input("Enter year:"))
if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    print(f"{year} is leap_year")
else:
    print(f"{year} is not leap_year")    