#include<stdio.h>
struct students
{
    char name[20];
    int roll;
    int marks;
    char address[20];

};
int main()
{
int n;
int i;
printf("enter the number of students");
scanf("%d",&n);
struct students s[n];
for(i=0;i<n;i++)
{
    printf("enter the name,roll,marks and address");
    scanf("%s%d%d%s",s[i].name,&s[i].roll,&s[i].marks,s[i].address);

}
for(i=0;i<n;i++)
{
    printf("name=%s,roll=%d,marks=%d,address=%s\n",s[i].name,s[i].roll,s[i].marks,s[i].address);
}
return 0;
}

