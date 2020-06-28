#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	int temp ;
	int max = -999 ;
	
	printf("Welcome to the great value calculation program\n");
	printf("Enter the four values\n");
	for (int x = 0 ; x < 4; x++){
		
		scanf("%d", &temp);
		if(temp > max){
			max = temp;
		
			
		}
		
	}
	printf("the max vulue is : \n");
	printf("%d\n", max);
	
			
	return 0;
}
