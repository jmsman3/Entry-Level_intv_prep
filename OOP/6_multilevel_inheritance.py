class Person:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age

    def personalInfo(self):
        print(self.name, " - ", self.age)


class Company(Person):
    def __init__(self, name, age, cname, cloc) -> None:
        # Call the Person constructor
        Person.__init__(self, name, age)
        self.cloc = cloc
        self.cname = cname

    def companyInfo(self):
        print(self.cname, " - ", self.cloc)


class Employee(Company):
    def __init__(self, name, age, cname, cloc) -> None:
        # Call the Company constructor
        Company.__init__(self, name, age, cname, cloc)


# Creating an object of Employee
obj = Employee("Sayed", 24, "Google", "USA")

# Display personal and company info
obj.personalInfo()
obj.companyInfo()

# Method resolution order
print(Employee.mro())  # This prints the method resolution order
