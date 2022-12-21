#include <iostream>
#include <string>
using namespace std;
//Hybrid inheritance 
class student{ 
                int id;
                string name;
                public:
                void getstudent(){
                                cout << "Enter student Id and student name"; cin >> id >> name;
   }
};
class marks: public student{ 
                protected:
                int marks_math,marks_phy,marks_chem;
                public:
                void getmarks(){
                               cout << "Enter 3 subject marks:"; cin >>marks_math>>marks_phy>>marks_chem;
   }
};
class sports{
              protected:
              int spmarks;
              public:
              void getsports(){
                              cout << "Enter sports marks:"; cin >> spmarks;
   }
};
class result : public marks, public sports{
                int total_marks;
                float avg_marks;
                public :
               void display(){
                             total_marks=marks_math+marks_phy+marks_chem;
                             avg_marks=total_marks/3.0;
 
                           cout << "Total marks =" << total_marks << endl;
                           cout << "Average marks =" << avg_marks << endl;
                           cout << "Average + Sports marks =" << avg_marks+spmarks;
   }
};
  
  
int main(){
                result res;
                res.getstudent();
                res.getmarks();
                res.getsports();
                res.display();
               return 0;
}