# Quiz-Game-cpp

### Description:

This ‘**Quiz Game Project**’ is developed using C++ programming language. Object 
oriented programming is a type of programming which uses objects and classes for its 
functioning. Five classes named date, Quiz, student, teacher and admin have been used. In 
each class its respective data members and member functions have been encapsulated. The 
class teacher has inherited the student class as public and the class admin has inherited the 
teacher class as public. 

### Concepts used:

- **Classes and objects** (5 classes has been created) 
- **Multi-level Inheritance** (In class student, teacher and admin)
- **Encapsulation** (binding data members and member functions in a single class)
- **Abstraction** (Displaying only the required details) and Data Hiding 
For example, showing student details only to teacher and admin, and displaying 
teacher details only to the admin. 
- **Inline functions** – The functions viewStudentDetails() and viewTeacherDetails() are 
inline functions in the program
- **Strings** – In login() function, strcmp is used to check whether given string and input 
string are equal or not
- **Default constructors and Parameterized constructors** – In class date, 
parameterized constructor is used to display day. In class student, default constructor 
is used to set the variable score to zero.
- **Polymorphism**: In this program, compile-time polymorphism has been used. We 
have used Function overloading in class date. The functions are: void print(int) and 
void print(string)
- **Virtual function** – In class teacher, void viewTeacherDetails() has been declared as 
zero. This is called **Pure Virtual Function**. Hence, the class teacher can be called as 
an **Abstract Class**.
- **Friend Class** – The class Quiz is a friend class of class student.
- **Passing Object as an Argument** – In function stu_details, an object of class student 
is passes as an argument to the function QuizQues(), which is in class Quiz.
- **Using ctime header file** – This enables us to set a time limit, here, 50 seconds. If 
the student exceed 50 seconds, then 5 marks will be deducted.
  
### About the Program

- **STEP 1:** As the program is executed, the user has to enter the user name and 
password to login. The username is ‘user’ and the password is ‘pass’. The user has to 
login each time to ensure safety of the system. 
- **STEP 2:** Then the way the user wants to be logged in has to be selected. 
- **STEP 3:** If the user logged in as student, then the name, register number, department 
and year of study has to be filled by the student. Now if the student is ready to take 
quiz, then the system will ask in which language they want to attend the quiz – C. 
C++, Python or Java. The student has to attend the quiz of 5 questions and his mark 
will be recorded. If the time limit exceeds 50 seconds, then 5 marks will be deducted. 
The score is displayed to the student. Now, the system will log out. 
- **STEP 4:** If the user logged in as teacher, then the name, ID number and department 
has to be filled by the teacher. Then the student details with student’s score in quiz 
will be visible to the teacher. Now, system will log out. 
- **STEP 5:** If the user logged in as admin, then the name has to be filled by the admin. 
Then both the teacher details and student details can be viewed by the admin. Now, 
system will log out. If the user want to exit the quiz system, the exit option must be 
entered

### System Architechture:

<img width="254" alt="image" src="https://github.com/mvharsh/Quiz-Game-cpp/assets/111365320/3e1d237d-f644-475b-b94c-873af5c654a8">
