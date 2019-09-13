import array
import os

#Postcondition: clears output screen
def clear():
    print ("\n" * 100)

#Postcondition: returns a string result of what given acronym stands for or and Error Message
def linear_search(acronym, arr):
    if (len(arr) == 0):
        return "Empty List"
    else:
        for val in arr:
            if (val.acronym == acronym):
                return val.stands_for

        return "Acronym not found"

#Postcondition: returns a string result of what given acronym stands for or and Error Message    
def binary_search(acronym, arr, start, end):
    mid = int((start + end) / 2)
    if (len(arr) == 0):
        return "Empty List"

    if (start == end):
        return ("Acronym not found" if arr[start].acronym != acronym else arr[start].stands_for)

    if (acronym == arr[start].acronym):
        return arr[start].stands_for
    elif (acronym == arr[end].acronym):
        return arr[end].stands_for
    elif (acronym == arr[mid].acronym):
        return arr[mid].stands_for
    else:
        if (acronym > arr[mid].acronym):
            return binary_search(acronym, arr, mid + 1, end)
        else:
            return binary_search(acronym, arr, start, mid - 1)
    

done = False
while (False == done):
    print("Enter an acronym: ")
    acronym = input()
    clear()
    print("Press Enter to continue\n\n\n")
    #print(acronym + " stands for " + linear_search(acronym, array.all_acronyms))
    print(acronym + " stands for " + binary_search(acronym, array.all_acronyms, 0, len(array.all_acronyms) - 1))
    acronym = input()
    clear()
