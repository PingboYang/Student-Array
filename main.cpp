//input the number of students
#include <iostream>
using namespace std;

int main() {
  int numberOfStudents;
  cout<<"\nEnter number of students. ";
  cin>> numberOfStudents;
  
  int grades[numberOfStudents];
  string names[numberOfStudents];
  for(int i=0; i<numberOfStudents; i++){
    cout<<"Enter the name #"<<i+1;
    cin>>names[i];
    cout<<"Enter the grades of the student";
    cin>>grades[i];
  }
  
    
 
}