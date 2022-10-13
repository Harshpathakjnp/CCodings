#include <stdio.h>
int main()
{
    int i,j,n,count=0,a[1000];
    printf("Enter the size of Array : ");
    scanf("%d",&n);
    printf("Enter the Elements Suraj : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
                break;
        }
        if (j == n)
        {
            ++count;
            
            
        }
    }
    printf("%d,", count);
}
