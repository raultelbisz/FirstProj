#Program that is a simple calculator

print("Select an operation: ")
print ("1. Addition")
print ("2. Subtraction")
print ("3. Division")
print ("4. Multiplication")
choice = input()

x = float(input("Enter a number: "))
y = float(input("Enter a second number: "))

if choice == '1':
    addAns = (x + y)
    print (addAns)
elif choice == '2':
    subAns = (x - y) 
    print (subAns)

elif choice == '3':
    divAns = (x / y)
    print (divAns)

elif choice == '4':
    mulAns = (x * y)
    print (mulAns)

else:
    print ('Naaa')
                
