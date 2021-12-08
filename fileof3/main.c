#include <stdio.h>
#include <stdlib.h>
typedef struct
{
int rollno;
int marks;
char name[20];
}
Student;
int main()
{
    FILE *fp;
    Student students[3];
    fp=fopen("D:\\harsh\\Books.txt","w");
    if(fp==NULL) {
		printf("Error!");
		return 0;
	}

   int i,n=3;
   for(i=0;i<=n-1;i++)
   {
       scanf("%d",&students[i].rollno);
       fflush(stdin);
       scanf("%d",&students[i].marks);
       fflush(stdin);
       scanf("%s",&students[i].name);
       fflush(stdin);
   }
   for(i=0;i<=n-1;i++)
   {
       printf("Roll No=%d, Marks=%d, Name=%s\n",students[i].rollno,students[i].marks,students[i].name);
       fwrite(&students[i],sizeof(Student),1,fp);
   }

    fflush(fp);
    fclose(fp);
    return 0;
}
