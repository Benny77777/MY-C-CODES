#print("Hello world")
#print("*" *10)
#print "hello world"
#x=1
student_count = 1000#integer
rating = 4.9#floating point
print(student_count)
is_published = True#or False#boolean
course = "python programming"#strings
print(len(course))
print(course[0])
print(course[-1])
print(course[0:3])#splicing extract first three characters
print(course[:3 ])
print(course[0: ])
print(course[:])
course = "python \nprogramming"
print(course)#for escaping use #,\'.\",\\,\n
#concatenation
first = "Awankem"
last = "Benjamin"
full = first + " " + last
print(full)
#formatted output
full = f"{first} {last}"
print(full)
full = f"{len(first)} {last}"
print(full)
full = f"{first} {len(last)}"
print(full)
#string method
course.upper()#converts course to an upper case letter
print(course.upper())
course.lower#converts course to a lower case letter
print(course.lower())
print(course.title())#capitalize the first letter of each word 
print(course.lstrip())#removes beginnig spaces
print(course.rstrip())#removes bending spaces
print(course.find("pro"))#find an index
print(course.replace("p","j"))#interchanges letters
print("k" in course)#gives a boolean
print("k" not in course)#gives a boolean






