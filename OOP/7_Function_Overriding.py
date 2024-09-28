

# Runtime Polymorphism -> Dynamic Binding | Overriding | Late Binding

# CompileTime Polymorphism-> Static Binding | Overloading | Early Binding

# In Python, method overriding can be achieved when a child class defines a method that is already present in its parent class, but with a different implementation.


# Base class
class Calculator:
    def sum(self, num1, num2):
        return num1 + num2

# Derived class overrides the sum method
class AdvancedCalculator(Calculator):
    def sum(self, num1, num2, num3=None):
        # If a third number is provided, sum all three numbers
        if num3 is not None:
            return num1 + num2 + num3
        # Otherwise, fall back to the parent class's sum method
        return super().sum(num1, num2)

# Create an object of the derived class
cal = AdvancedCalculator()
print(cal.sum(1, 2))      # Output: 3 (from base class)
print(cal.sum(1, 2, 3))   # Output: 6 (overridden method in derived class)
