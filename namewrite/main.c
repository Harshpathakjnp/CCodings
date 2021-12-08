#include <stdio.h>
#include <stdlib.h>
typedef struct
{
char s[10];
char t[10];
char u[10];
}
m;
void main()
{
    FILE *fp;
    fp=fopen("D:\\harsh\\Names.txt","w");
    if(fp==NULL) {
		printf("Error!");
	}
   m hars ,ms1;
    int x;
   switch (x)
   {
case 0:
    {
   printf("enter the student name 1 :");
   scanf ("%s",&ms1.s);
    }
case 1:
    {
   printf("enter the student name 2 :");
   scanf ("%s",&ms1.t);
    }
case 2:
    {
   printf("enter the student name 3 :");
   scanf ("%s",&ms1.u);
    }

   }
    fwrite(&ms1,sizeof(m),1,fp);
    fflush(fp);
    fclose(fp);
}
