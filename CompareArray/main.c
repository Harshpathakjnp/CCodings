#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,n;
int a[]={1,2,3,4,5};
int b[]={1,2,4,4,5};
int n1= sizeof(a)/sizeof(int);
int n2= sizeof(b)/sizeof(int);
if(n1!=n2)
    {
    printf("Arrays are not Equal");
    return 0;
    }
for(i=0;i<=n1-1;i++)
{
    if(a[i]==b[i])
        ;
    else
    {
         printf("Arrays are not Equal");
    return 0;
    }
}

    printf("Arrays are Equal");

}
