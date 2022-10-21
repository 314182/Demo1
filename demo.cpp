#include <iostream>
using namespace std;
class Student{
  int rollno;
  string name;
  public:
  Student(int,string);
  void setrollno(int);
  int getrollno();
  void setname(string);
  string getname();
};
Student::Student(int rno,string s){
  rollno=rno;
  name=s;
}
void Student::setrollno(int roll){
  rollno = roll;
}
int Student::getrollno(){
  return rollno;
}
void Student::setname(string Name){
  name = Name;
}
string Student::getname(){
  return name;
}
int main{
  Student St(20,rohith);
  cout<<" Student's rollno previously"<<st.getrollno()<<endl;
  cout<<" Student's name previously"<<st.getname()<<endl;
  st.setrollno(30);
  st.setname("varun");
  cout<<" Student's rollno present"<<st.getrollno()<<endl;
  cout<<" Student's name present"<<st.getname()<<endl;

 return 0;
  }
  
