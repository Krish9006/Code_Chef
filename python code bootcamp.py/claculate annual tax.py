annual_salary = float(input("Enter the annual salary: "))
tax_rate = float(input("Enter the tax rate (e.g., 0.25 for 25%): "))

monthly_salary = (annual_salary * (1 - tax_rate)) / 12
print(f"The monthly salary after taxes is: ${monthly_salary:.2f}")