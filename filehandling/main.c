#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE* fp=fopen("D:\\New folder\\sachin","w");
fprintf(fp,":%s\n","harsh vardhan pathak");
fflush(fp);
fclose(fp);


}
