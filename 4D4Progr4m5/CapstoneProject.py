import numpy as np

# Q1. Calculate Total and Average Grade

Maths = 80
Science = 75
English = 90
TotalMarks = Maths + Science + English
AverageGrade = TotalMarks / 3
print("Total Marks:", TotalMarks)
print("Average Grade:", AverageGrade)
if AverageGrade >= 90:
    print("Grade: A")
elif AverageGrade >= 80:
    print("Grade: B")
elif AverageGrade >= 70:
    print("Grade: C")

# Q2. Convert Celsius to Fahrenheit
Celcius = 25
Fahrenheit = (Celcius * 9/5) + 32
print("The temperature in Fahrenheit is: ", Fahrenheit)

# Q3. store employee details in a dictionary 
EmployeeDetails = {"Name":"Amit", "Age":28, "Department":"Sales"}
print(EmployeeDetails)

# Q5. Calculate performance metrics using numpy

StudentScores = np.array([85, 78, 92, 88, 76])
AverageScore = np.mean(StudentScores)
print("Average Score:", AverageScore)
print("Highest Score : ", np.max(StudentScores))
print("Lowest Score : ", np.min(StudentScores))
print("Standard Deviation : ", np.std(StudentScores))