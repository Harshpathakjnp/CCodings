#include <stdio.h>
#include <stdlib.h>
typedef struct              //like this we have to write the structure
{
char s[10];                 //taking characters for writing the names..
char t[10];
}
m;
void main()
{
    FILE *fp;               //for file handling we have to use this..
    fp=fopen("D:\\harsh\\student1.txt","w");    //this syntax for writing the prgrm..
    if(fp==NULL) {
		printf("Error!");
	}
   m hars ,ms1;                 // defining the variable like this ...
   printf("enter the student name 1 :");
   scanf ("%s",&ms1.s);             // like this we have to write the name by structure
   printf("enter the student name 2 :");
   scanf ("%s",&ms1.t);
    fwrite(&ms1,sizeof(m),1,fp);
    fflush(fp);                     //fflush and fclose should be written.....
    fclose(fp);






}
