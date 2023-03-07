//input the number of students
#include <iostream>
using namespace std;

int inputGrade();
string inputName();
void printStudentInfo(string names[], int grades[] , int size);
int main() {
  int numberOfStudents;
  cout<<"\nEnter number of students. ";
  cin>> numberOfStudents;
  
  int grades[numberOfStudents];
  string names[numberOfStudents];
  for(int i=0; i<numberOfStudents; i++){
    cout<<"Enter the name #"<<i+1;
    names[i]=inputName();
    cout<<"Enter the grades of the student";
    grades[i]=inputGrade();
  }
  printStudentInfo(names, grades,numberOfStudents);
  }
  int inputGrade() {
    int gr;
    cin>>gr;
    while(gr<0 || gr>100){
      cout<<"\nInvalid grade. Enter a grade between 0 to 100";
      cin>>gr;
    }
    return gr;
  }
  string inputName() {
    string na;
    cin>>na;
    return na;
  }
void printStudentInfo(string names[], int grades[] , int size){
  cout<<"\n Name         Grade";
  for(int i=0; i<size; i++){
    cout<<"\n"<<names[i]<<"        "<<grades[i];
  }
}
    
 
