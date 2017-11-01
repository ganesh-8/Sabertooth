#include<stdio.h>
void insertion_sort(int a[],int n)
int main()
{
	int i,n,a[50];
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	insertion_sort(a,n);
	printf("The sorted array is :\n);
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}


void insertion_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp = a[i];
		for(j=i-1;j>=0&&temp<a[j];j++)
		{
			a[j+1] = a[j];
		}
			a[j+1] = temp;
	}
}