students = []
class Student:
    def __init__(self, name, student_id, college, phone, address, marks):
        self.name = name
        self.id = student_id
        self.college = college
        self.phone = phone
        self.address = address
        self.marks = marks
    @classmethod
    def addStudent(cls):
        name = input("Enter student name: ")
        student_id = input("Enter student ID: ")
        college = input("Enter student college: ")
        phone = input("Enter student phone number: ")
        address = input("Enter student address: ")
        marks = input("Enter student marks: ")
        student = cls(name, student_id, college, phone, address, marks)
        students.append(student)
        print(f"\nStudent '{name}' added successfully!")
    @classmethod
    def updateMarks(cls):
        student_id = input("Enter student ID to update marks: ")
        for student in students:
            if student.id == student_id:
                new_marks = input("Enter new marks: ")
                student.marks = new_marks
                print("Marks updated successfully!")
                return
        print("Student not found!")
    @classmethod
    def searchStudent(cls):
        student_id = input("Enter student ID to search: ")
        for student in students:
            if student.id == student_id:
                print("\n===== Student Found =====")
                print("Name    :", student.name)
                print("ID      :", student.id)
                print("College :", student.college)
                print("Phone   :", student.phone)
                print("Address :", student.address)
                print("Marks   :", student.marks)
                return
        print("Student not found!")
    @classmethod
    def deleteStudent(cls):
        student_id = input("Enter student ID to delete: ")
        for student in students:
            if student.id == student_id:
                students.remove(student)
                print("Student deleted successfully!")
                return
        print("Student not found!")

    @classmethod
    def showAllStudents(cls):
        if len(students) == 0:
            print("\nNo students found!")
            return
        print("\n========== ALL STUDENTS ==========")
        for student in students:
            print("--------------------------------")
            print("Name    :", student.name)
            print("ID      :", student.id)
            print("College :", student.college)
            print("Phone   :", student.phone)
            print("Address :", student.address)
            print("Marks   :", student.marks)
        print("--------------------------------")
def mainMenu():
    while True:
        print("\n========== STUDENT MANAGEMENT SYSTEM ==========")
        print("1. Add Student")
        print("2. Update Marks")
        print("3. Show All Students")
        print("4. Search Student")
        print("5. Delete Student")
        print("6. Exit")
        choice = input("Enter your choice (1-6): ")
        if choice == "1":
            Student.addStudent()
        elif choice == "2":
            Student.updateMarks()
        elif choice == "3":
            Student.showAllStudents()
        elif choice == "4":
            Student.searchStudent()
        elif choice == "5":
            Student.deleteStudent()

        elif choice == "6":
            print("Thank you for using the Student Management System!")
            break
        else:
            print("Invalid choice! Please try again.")

if __name__ == "__main__":
    mainMenu()