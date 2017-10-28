#include <stdio.h>

#define MAX 100
int A[MAX];
void slct_sort(int A[], int n);

int main(int argc, const char* argv[])
{
    int i, n;
    for (n=0;n<MAX&&scanf("%d", &A[n])!=EOF;n++);
    slct_sort(A, n);
    for (i=0;i<n;i++)
        printf("%d\n", A[i]);
}

void slct_sort(int a[], int n)
{
    int i, j, s, t;
    for (i=0;i<n-1;i++) {
        s=i;
        for (j=i+1;j<n;j++)
            if (a[j]<a[s])
                s=j;
        /*a[s]^=a[i];
        a[i]^=a[s];
        a[s]^=a[i];
        */
        t=a[s],a[s]=a[i],a[i]=t;
    }
}

