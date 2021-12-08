#include <stdio.h>
#include <stdlib.h>
typedef struct
{
int rollno;
int marks;
char name[20];
}
Student;
void main()
{
    FILE *fp;
    fp=fopen("D:\\harsh\\Books.txt","r");
    if(fp==NULL) {
		printf("Error!");
	}
   Student students[3];
   int n=3,i;
   for(int i=0;i<=n-1;i++)
   {
    fread(&students[i],sizeof(Student),1,fp);
   }
    for(i=0;i<=n-1;i++)
    {
     printf("Roll No=%d, Marks=%d, Name=%s\n",students[i].rollno,students[i].marks,students[i].name);
    }
    fclose(fp);
}
