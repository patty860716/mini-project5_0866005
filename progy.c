#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
//printf("This is program y");
	while(1)
	{
		if(system("ping google.com -c 2")==0){
			printf("access Network\n");
			//break;
		}
		else
		{
			printf("not Access Network\n");
		}
		printf("Continue?(yes/no)\n");
		char a[10];
		scanf("%s",a);
		if(strcmp(a,"no")==0)
		{
			break;
		}
		
	}
	return 0;
	
}
