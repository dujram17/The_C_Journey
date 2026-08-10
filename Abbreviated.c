#include<stdio.h>
int main(){
    char fname[20], mname[20],lname[20];
    printf("Enter First Name:");
    scanf("%s",&fname);
    printf("Enter Middle Name:");
    scanf("%s",&mname);
    printf("Enter Last Name:");
    scanf("%s",&lname);
    printf("\n----------Result----------\n");
    printf("Full Name       :%s %s %s",fname,mname,lname);
    printf("\nAbbreviated Name:%c %c %s\n",fname[0],mname[0],lname);
    return 0;
    }