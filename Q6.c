#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
	char a[50];
	
	int i,j;
	
	printf("Enter String: ");
	for(i=0;i<10;i++)
	scanf("%[^\n]",&a[i]);
	
	
		printf("Entered String: %s\n\n",a);
		
	j=strlen(a);
	printf("Length of String: %d",j);	

	for(i=0;i<j-1;i++)
	{
	
	if(a[i]==a[i+1])
	{
		
		a[i+1]=="*";
		printf("\nYes");
		
		printf("%s",strcat(a[i],a[i+1]));

	}
	
	
}
}
