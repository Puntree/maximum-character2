#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], result;
  	int i, length;
  	int max = -1;
  	
  	int freq[256] = {0}; 
 
  	printf("Enter String : ");
  	gets(str);
  	
  	length = strlen(str);
  	
  	for(i = 0; i < length; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < length; i++)
  	{
		if(max < freq[str[i]])
		{
			max = freq[str[i]];
			result = str[i];
		}
	}
	printf("Maximum character is %c", result);
	
  	return 0;
}
