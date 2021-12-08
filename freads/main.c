#include <stdio.h>
int main() {
	char name[50];
	char fname[50];
	int marks,i,n;

	FILE *harsh;
	harsh=fopen("D:\\harsh\\student.txt","r");
	if(harsh==NULL) {
		printf("Error!");
	}
        fread()
		fprintf(harsh,"\nName: %s \nMarks=%d \nfname: %s \n",name,marks,fname);
	}
	fclose(harsh);
	return 0;
}
