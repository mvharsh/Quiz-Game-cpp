#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<cstring>
#include <ctime>
using namespace std;

class date
{
 int daynum;
 string month;
 string day;
 public:
 date(string day)
 {
   cout<<"DAY : "<<day<<endl;
 }
 void print(int daynum)
 {
   cout<<daynum<<" \n\n";
 }
 void print(string month)
 {
   cout<<"DATE: "<<month<<" ";
 }
};

class Quiz
{
 public:
    int QuizQues(class student);
};

class student
{
  public:
      string stu_name;
      string reg_no;
      string stu_department;
      student()
      {
        score = 0;
      }
      int stu_year;
      int score;
      void stu_details();
      friend class Quiz;
};
class teacher:public student
{
    public:
    string teacher_name;
    int teacher_id;
    string teacher_department;
    void teacher_details();
    void viewStudentDetails();
    virtual void viewTeacherDetails() = 0;
};

class admin:public teacher
{
    public:
    string admin_name;
    void admin_details();
    void viewTeacherDetails();
};

void student::stu_details()
{
 student s;
 Quiz q;
 cout<<"\n  =======================  STUDENT DETAILS  =======================\n ";
 cout<<"\nEnter your name: ";
 cin>>stu_name;
 cout<<"Enter your register number: ";
 cin>>reg_no;
 cout<<"Enter your department: ";
 cin>>stu_department;
 cout<<"Enter year of study: ";
 cin>>stu_year;
 score = q.QuizQues(s);
 cout<<"\n\n\t\t\t\tYOUR SCORE IS "<<score;
 cout<<"\n\n\n\t\t\t\tPress any key to continue...";
 getch();
 system("cls");
}

void teacher::teacher_details()
{
 cout<<"\n  ======================= TEACHER DETAILS  =======================\n ";
 cout<<"\nEnter your name: ";
 cin>>teacher_name;
 cout<<"Enter your ID: ";
 cin>>teacher_id;
 cout<<"Enter your department: ";
 cin>>teacher_department;
 cout<<"\n  --------------  STUDENT DETAILS  -------------\n\n";
 cout<<"NAME\tREG NO\tDEPT\tYEAR\tSCORE"<<endl;
 viewStudentDetails();
 cout<<"\n\n\n\t\t\t\tPress any key to continue...";
 getch();
 system("cls");
}

void admin::admin_details()
{
 cout<<"\n  =======================  ADMIN DETAILS  =======================\n ";
 cout<<"Enter your name: ";
 cin>>admin_name;
 cout<<"\n  --------------  TEACHER DETAILS  -------------\n\n";
 cout<<"NAME\tID NO\tDEPT"<<endl;
 viewTeacherDetails();
 cout<<"\n  --------------  STUDENT DETAILS  -------------\n\n ";
 cout<<"NAME\tREG NO\tDEPT\tYEAR\tSCORE"<<endl;
 viewStudentDetails();
 cout<<"\n\n\n\t\t\t\tPress any key to continue...";
 getch();
 system("cls");
}

inline void teacher::viewStudentDetails()
{
  cout<<stu_name<<"\t"<<reg_no<<"\t"<<stu_department<<"\t"<<stu_year<<"\t"<<score<<endl;
}

inline void admin::viewTeacherDetails()
{
 cout<<teacher_name<<"\t"<<teacher_id<<"\t"<<teacher_department<<endl;
}

int getuser()
{
 int ch;
 cout<<"\n  =======================  USER FORM  =======================\n ";
 cout<<"\nLogin as\n ";
 cout<<"\n1.Student\n2.Teacher\n3.Administrator\n4.Exit\n\n";
 cin>>ch;
 return ch;
}

void login()
{
  int a=0,i=0;
  char uname[10],c=' ';
  char pword[10],code[10];
  do
  {
    cout<<"\n  =======================  LOGIN FORM  =======================\n ";
    cout<<" \n                       ENTER USERNAME:-";
    cin>>uname;
    cout<<" \n                       ENTER PASSWORD:-";
    while(i<10)
    {
      pword[i]=getch();
      c=pword[i];
      if(c==13)
            break;
      else
            cout<<"*";
      i++;
    }
    pword[i]='\0';
    i=0;
    if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
   {
      cout<<"  \n\n\n       YOU HAVE SUCCESSFULLY LOGGED IN !!";
      cout<<"\n\n\n\t\t\t\tPress any key to continue...";
      getch();
      break;
   }
    else
   {
      cout<<"\n        SORRY !!!!  LOGIN IS UNSUCCESSFUL";
      a++;
      getch();
      system("cls");
    }
  } while(a<=2);
  if (a>2)
  {
    cout<<"\nSorry you have entered the wrong username and password for three times!!!";
    cout<<"\nTry again later";
    exit(0);
    getch();
  }
  system("cls");
}

int C_ques()
{
 int x=0;
 char q1,q2,q3,q4,q5;
 cout<<"\n\nQuestion 1:  All keywords in C are in\n";
 cout<<"a.UpperCase\nb.LowerCase\nc.CamelCase\nd.None of the above\n\n";
 cout<<"Enter your choice: ";
 cin>>q1;
 if(q1=='b')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }

 cout<<"\n\nQuestion 2:  Which of the following typecasting is accepted by C language?\n";
 cout<<"a.Widening conversions\nb.Narrowing conversions\nc.Widening & Narrowing conversions\nd.None of the mentioned\n\n";
 cout<<"Enter your choice: ";
 cin>>q2;
 if(q2=='c')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 3:  Functions in C Language are always\n";
 cout<<"a.Internal\nb.External\nc.Both Internal and External\nd.External and Internal are not valid terms for functions\n\n";
 cout<<"Enter your choice: ";
 cin>>q3;
 if(q3=='b')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 4:  Which of the following is NOT possible with any 2 operators in C?\n";
 cout<<"a.Different precedence, same associativity\nb.Different precedence, different associativity\n";
 cout<<"\nc.Same precedence, different associativity\nd.All of the mentioned\n\n";
 cout<<"Enter your choice: ";
 cin>>q4;
 if(q4=='c')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 5:  Which of the following return-type cannot be used for a function in C?\n";
 cout<<"a.char *\nb.struct\nc.void\nd.none of the mentioned\n\n";
 cout<<"Enter your choice: ";
 cin>>q5;
 if(q5=='d')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 return x;
}

int Oops_ques()
{
 int x=0;
 char q1,q2,q3,q4,q5;
 cout<<"\n\nQuestion 1:  Which of the following data type is supported in C++ but not in C?\n";
 cout<<"a.int\nb.bool\nc.float\nd.char\n\n";
 cout<<"Enter your choice: ";
 cin>>q1;
 if(q1=='b')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 2:  When can an inline function be expanded?\n";
 cout<<"a.Runtime\nb.CompileTime\nc.Never gets expanded\nd.All of the above\n\n";
 cout<<"Enter your choice: ";
 cin>>q2;
 if(q2=='b')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 3:  Under which pillar of OOPS does base class and derived class relationship come?\n";
 cout<<"a.Polymorphism\nb.Inheritance\nc.Abstraction\nd.Encapsulation\n\n";
 cout<<"Enter your choice: ";
 cin>>q3;
 if(q3=='b')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 4:  Which of the following functions can be inherited from base class?\n";
 cout<<"a.Constructor\nb.Destructor\nc.Static\nd.None of the above\n\n";
 cout<<"Enter your choice: ";
 cin>>q4;
 if(q4=='d')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 5:  Choose the option below which is not a member of class.\n";
 cout<<"a.Friend Function\nb.Static Function\nc.Virtual Function\nd.Const Function\n\n";
 cout<<"Enter your choice: ";
 cin>>q5;
 if(q5=='d')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 return x;
}

int Java_ques()
{
 int x=0;
 char q1,q2,q3,q4,q5;
 cout<<"\n\nQuestion 1: Number of primitive data types in Java are?"<<endl;;
 cout<<"a.5\nb.6\nc.7\nd.8\n\n";
 cout<<"Enter your choice: ";
 cin>>q1;
 if(q1=='d')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 2: Automatic type conversion is possible in which of the possible cases?"<<endl;
 cout<<"a.Byte to int\nb.Int to long\nc.Long to int\nd.Short to int\n"<<endl;
 cout<<"Enter your choice: ";
 cin>>q2;
 if(q2=='b')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 3: Identify the keyword among the following that makes a variable belong to a class,rather than being defined for each instance of the class."<<endl;;
 cout<<"a.static\nb.final\nc.volatile\nd.abstract\n"<<endl;
 cout<<"Enter your choice: ";
 cin>>q3;
 if(q3=='a')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 4: In which of the following is toString() method defined"<<endl;;
 cout<<"a.java.lang.Object\nb.java.lang.String\nc.java.lang.util\nd.None\n"<<endl;
 cout<<"Enter your choice: ";
 cin>>q4;
 if(q4=='a')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 5: To which of the following does the class string belong to."<<endl;;
 cout<<"a.java.lang\nb.jawa.awt\nc.java.applet\nd.java.string\n\n";
 cout<<"Enter your choice: ";
 cin>>q5;
 if(q5=='a')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 return x;
}

int Python_ques()
{
 int x=0;
 char q1,q2,q3,q4,q5;
 cout<<"\n\nQuestion 1: What is the maximum length of a Python identifier?"<<endl;;
 cout<<"a.32\nb.16\nc.128\nd.No fixed length is specified\n\n";
 cout<<"Enter your choice: ";
 cin>>q1;
 if(q1=='d')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 2: What will be the output of the following code snippet?"<<endl;;
 cout<<"def check(a):\n print(\"Even\" if a % 2 == 0 else \"Odd\")\n check(12)"<<endl;
 cout<<"a.Even\nb.Odd\nc.Error\nd.None\n"<<endl;
 cout<<"Enter your choice: ";
 cin>>q2;
 if(q2=='a')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 3: Which of the following statements are used in Exception Handling in Python?"<<endl;;
 cout<<"a.try\nb.expect\nc.finally\nd.All of the above\n"<<endl;
 cout<<"Enter your choice: ";
 cin>>q3;
 if(q3=='d')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 4: Which of the following modules need to be imported to handle date time computations in Python?"<<endl;;
 cout<<"a.datetime\nb.date\nc.time\nd.timedate\n"<<endl;
 cout<<"Enter your choice: ";
 cin>>q4;
 if(q4=='a')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 cout<<"\n\nQuestion 5: In which language is Python written?"<<endl;;
 cout<<"a.Java\nb.C\nc.C++\nd.None of the above\n\n";
 cout<<"Enter your choice: ";
 cin>>q5;
 if(q5=='b')
 {
   x=x+10;
   cout<<" \t Great! Your Game score is: "<<x;
 }
 else
 {
  cout<<" \t Sorry wrong answer "<<endl;
 }
 return x;
}

int Quiz::QuizQues(student s)
{
 string Respond;
 cout << "\nAre you ready to take the quiz " << s.stu_name << "? yes/no" << endl;
 cin >> Respond;
 if (Respond == "yes") {
    cout << endl;
    cout << "Good Luck!" << endl;
    cout<<"\n\n\n\t\t\t\tPress any key to continue...";
    getch();
 }
 else {
    cout << "\nOkay Good Bye!" << endl;
    return 0;
 }
 system("cls");
 int choice,mark;
 cout<<"Select your language: ";
 cout<<"\n1. C\n2. C++\n3. Python\n4. Java\n\n";
 cin>>choice;
 const int MAX_TIME_LIMIT = 50000;
 cout<<"TIMER OF 50 SECONDS HAS STARTED!!!\n\n";
 long start_time = clock();
 switch(choice)
 {
  case 1:
      mark = C_ques();
      break;
  case 2:
      mark = Oops_ques();
      break;
  case 3:
      mark = Python_ques();
      break;
  case 4:
      mark = Java_ques();
      break;
 }
 long end_time = clock();
 if( end_time - start_time > MAX_TIME_LIMIT){
      cout << "\n\nTIME LIMIT HAS BEEN EXCEEDED\n";
      cout<<"5 MARKS HAS BEEN DEDUCTED\n\n";
      cout<<"\n\t\t\t\tTHANK YOU FOR ATTENDING THE QUIZ";
      return (mark-5);
   }
 else
     cout<<"\n\t\t\t\tTHANK YOU FOR ATTENDING THE QUIZ";
     return mark;
}

int main()
{
 admin a;
 date d("Monday");
 d.print("July");
 d.print(4);
 login();
 while(1){
 int userr = getuser();
 switch(userr)
 {
  case 1:
      a.stu_details();
      break;

  case 2:
      a.teacher_details();
      break;

  case 3:
      a.admin_details();
      break;

  case 4:
      return 0;
 }
 }
}
