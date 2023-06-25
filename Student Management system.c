#include <stdio.h> 
struct student{
    char Fname[50],Lname[50]; 
    int roll; 
    float marks; 
} s[100]; 

int main(){
    int i, n, rn; struct student s[100];

//Taking student details from user

printf ("Enter total of students:\n"); scanf ("%d", &n); for (i=0; i < n; i++) { printf ("\n Enter information of student %d:\n", i + 1); printf ("Enter First name: "); scanf ("%s", s[i].Fname); printf ("Enter Last name: "); scanf ("%s", s[i].Lname); printf ("Enter roll number: "); scanf ("%d", &s[i].roll); printf ("Enter marks out of 100: "); scanf ("%f", &s[i].marks); printf("\n\n*************************************************\n"); }

printf("\nDisplaying Information:\n");
for(i=0;i<n;i++) { printf("\n %d. student info\n",i+1); printf("Name: %s %s\n",s[i].Fname,s[i].Lname);

printf("Roll number: %d\n",s[i].roll);

printf("Marks out of 100: %.1f\n",s[i].marks);

if(s[i].marks<0 || s[i].marks>100) printf("Wrong Entry\n\n"); 
else if(s[i].marks<50) printf("Grade : F\n\n"); 
else if(s[i].marks>=50 &&s[i].marks<60) printf("Grade : D\n\n"); 
else if(s[i].marks>=60 && s[i].marks<70) printf("Grade : C\n\n"); 
else if(s[i].marks>=70 && s[i].marks<80) printf("Grade : B\n\n"); 
else if(s[i].marks>=80 && s[i].marks<90) printf("Grade : A\n\n"); 
else printf("Grade : A+\n\n"); } 
return 0;
}