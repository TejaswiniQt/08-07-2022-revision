/***********************************C program to reverse the array*********************************************/

#include<stdio.h>

void reverse_array(int *arr,int size);

int main()
{
	int arr[100],size,i,temp;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	printf("Enter the elements of the array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",(arr+i));
	}
	reverse_array(arr,size);
	printf("Reverse of the array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
	return 0;
}

void reverse_array(int *arr,int size)
{
	int i,temp;
	for(i=0;i<(size/2);i++)
	{
		temp = arr[i];
		arr[i] = arr[size-1-i];
		arr[size-1-i] = temp;
	}
}

