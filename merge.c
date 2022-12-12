#include<stdio.h>
void main()
{
int ar1[20],ar2[20],ar3[40];
int m,n;
void readarray(int[],int);
void printarray(int[],int);
void merge(int[],int[],int[],int,int);
printf("number of elements in 1 array is[1-20]:");
scanf("%d",&m);
printf("enter elements in non-decreasing order:");
readarray(ar1,m);
printf("number of elements in second array :");
scanf("%d",&n);
printf("enter elements in non decreasing order:");
readarray(ar2,n);
merge(ar1,ar2,ar3,m,n);
printf("merged array:\n");
printarray(ar3,m+n);
}
void readarray(int ar1[],int n)
{
int i;
for(i=0;i<n;i++)
scanf("%d",&ar1[i]);
return;
}
void printarray(int ar1[],int n)
{
int i;
for(i=0;i<n;++i)
printf("%d, ",ar1[i]);
return;
}
void merge(int a[],int b[],int c[],int m,int n)
{
int i,j,k;
i=j=k=0;
while(i<m&&j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i=i+1;
k=k+1;
}
else
{
c[k]=b[j];
j=j+1;
k=k+1;
}
}
while(i<m)
c[k+1]=a[i++];
while(j<n)
c[k++]=b[j++];
}
