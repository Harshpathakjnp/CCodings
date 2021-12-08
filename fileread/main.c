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
    fp=fopen("D:\\harsh\\names.txt","r");
    if(fp==NULL) {
		printf("Error!");
	}
   m hars ,ms1;
   int x;
    fread(&ms1,sizeof(m),1,fp);
    while(1)
    {
    printf("\nenter your choice to print name :");
    scanf("%d",&x);
    if(x==1)
        printf("%s",ms1.s);
    if(x==2)
        printf("%s",ms1.t);
    if(x==3)
        printf("%s",ms1.u);
    //fprintf(stdout,"%s %s %s",ms1.s,ms1.t,ms1.u);
    fclose(fp);
    }
}
