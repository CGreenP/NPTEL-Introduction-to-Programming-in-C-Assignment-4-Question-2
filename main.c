#include <stdio.h>
#include <stdlib.h>
int countDistinct(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (i == j)
        {
            res++;
        }
    }
    return res;
}

int main()
{
    int n,i,j,inp,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&inp);
        a[i]=inp;
    }
    printf("%d",countDistinct(a,n));
    return 0;
}
