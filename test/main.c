int main(){
   /* int x;
    int *p;
   x=100;
   p= &x;
   printf("%d\n",*p);
   *p=200;
   printf("%d\n",x);

 x =10;
int *p=&x;
printf("%d %d\n",x,*p);
printf("%d %d\n",p,&x);
*p=100;
printf("%d %d\n",x,*p);
x=500;
printf("%d %d\n",x,*p);

int x=1,y=2,t;
int *p1=&x;
int *p2=&y;
t=*p1;
*p1=*p2;
*p2=t;
printf("%d %d",*p1,*p2);
*/
int a[]={1,2,3,6,8},i;
int *p1=a;
int *p2=&a[0];          //zeroth element is the adress of the array......
printf("%d %d\n",p1,p2);
for(i=0;i<=4;i++)
printf("%d,",a[i]);
printf("\n");
for(i=4;i>=0;i--)
    printf("%d,",*(p1+i));
}
