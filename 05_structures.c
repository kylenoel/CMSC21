#include <stdio.h>
#include <string.h>

typedef struct{
  char name[50];
  int age;
  float gwa;
  int studentNumber;
}Student;

void display(Student s){
    printf("%s\n", s.name);
    printf("%d\n", s.age);
    printf("%.2f\n", s.gwa);
    printf("%d\n", s.studentNumber);
}

Student initializeStudent(int studentNum){
    Student newStudent;
    strcpy(newStudent.name, "John Doe");
    newStudent.age = 18;
    newStudent.gwa = 0;
    newStudent.studentNumber = studentNum;
    
    return newStudent;
}

int main() {
    //positional
    Student s1 = {"LeBron James", 20, 1.5};
    
    display(s1);
    
    //not in order
    Student s2 ={gwa:1.25, name:"Steph Curry", age: 21};
    
    display(s2);
    
    //dot operator
    Student s3;
    strcpy(s3.name, "Kevin Durant");
    s3.age = 19;
    s3.gwa = 2.5;
    
    display(s3);
    
    Student s4 = initializeStudent(123);
    display(s4);
    
    Student s5;
    scanf("%[^\n]%*c", &s5.name);
    scanf("%d", &s5.age);
    scanf("%f", &s5.gwa);
    

    
    display(s5);
    
    Student s6 = initializeStudent(125);
    display(s6);
    
    return 0;
}