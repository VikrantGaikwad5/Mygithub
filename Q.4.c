#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[500]="How now, Mrs. Brown Cow";
    char *p;
	
//	printf("Enter the String: ");
//	scanf("%[^\n]",&str); 
  
    
    p = strtok(str,",");
	
  
    
    while (p != NULL) { 
        printf("%s\n", p); 
        p = strtok(NULL, ".");
		 
    } 
  
    
} 

