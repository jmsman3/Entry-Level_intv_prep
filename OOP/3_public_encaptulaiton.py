class A:
    # Public attribute
    value = 5
    
    def __init__(self) -> None:
        pass
    
    # Public method
    def display(self):
        print(self.value)

# Creating an object of class A
obj = A()

# Directly accessing the public attribute from outside the class
obj.value = 10  # Modifying the public attribute
print(obj.value)  # Prints the updated value

# Calling the public method
obj.display()

# Checking the internal dictionary of the object
print(obj.__dict__)
