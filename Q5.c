#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int arr1[20];
	int arr2[20];
	int arr3[20];
	int i,j,k,l;
	
	printf("Enter length of array: ");
	scanf("%d",&i);
	
	printf("Enter %d Elements of Array:",i);
	for(j=0;j<i;j++)
	scanf("%d",&arr1[j]);
	
	for(j=0;j<i;j++)
	{
	
		if(arr1[j]%2==0)
		{
			
			
				arr2[k]=arr1[j];
				printf("Even Number is: %d\n",arr2[k]);

			
		}
		else 
		{
			arr3[l]=arr1[j];
			printf("Odd Numbers : %d\n",arr3[l]);

		}
		
	}	
	
}
