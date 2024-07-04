//Author:walter
//Date:04 July, 2024
//Description:c structure
//Regeneration number:BBIT-05-0124/2016

#include <stdio.h>
#include <string.h>


//EXCERCISE: Create a C structure named Student
typedef struct Student
{
    char firstName[30];
    char lastName[30];
    char email[50];
    char regNo[20];
    char dob[20];
    int age;
    char phoneNumber[20];
} student1;

int main() {
    // Assign stu name alias to student1
    student1 stu;

    // Assign values to stu variable
    strcpy(stu.firstName, "ochieng");
    strcpy(stu.lastName, "walter");
    strcpy(stu.email, "ochiengwalter96@gmail.com");
    strcpy(stu.dob, "11/11/2005");
    strcpy(stu.phoneNumber, "+254797031794");
    strcpy(stu.regNo, "BBIT-05-0124/2016");
    stu.age = 18; 

    printf("First Name: %s\n", stu.firstName);
    printf("Last Name: %s\n", stu.lastName);
    printf("Email: %s\n", stu.email);
    printf("D.O.B: %s\n", stu.dob);
    printf("Phone Number: %s\n", stu.phoneNumber);
    printf("Registration Number: %s\n", stu.regNo);
    printf("Age: %d\n", stu.age);

    return 0;
}





