#include <iostream>
using namespace std;
//multiple inheritance
class student_marks {
protected:
int rollNo, marks1, marks2;
public:
void get() {
cout << "Enter the Roll No.: "; cin >> rollNo;
cout << "Enter the two highest marks: "; cin >> marks1 >> marks2;
   }
};
class cocurricular_marks {
protected:
int comarks;
public:
void getsm() {
cout << "Enter the mark for CoCurricular Activities: "; cin >> comarks;
   }
};
 

class Result : public student_marks, public cocurricular_marks {
   int total_marks, avg_marks;
   public:
   void display()
   {
      total_marks = (marks1 + marks2 + comarks);
      avg_marks = total_marks / 3;
      cout << "\nRoll No: " << rollNo << "\nTotal marks: " << total_marks;
      cout << "\nAverage marks: " << avg_marks;
   }
};
int main()
{
   Result res;
res.get(); 
res.getsm(); 
res.display();
}