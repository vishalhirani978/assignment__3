#include <stdio.h>
int main(){
	int math , science ;
	printf ("enter marks of math:\n");
	scanf("%d",&math);
	printf ("enter marks of science:\n");
	scanf("%d",&science);
	if( math >= 50 && science>= 50 ) {
		printf("passed \n");
		if (math>80 && science>80){
			printf("got scholarship\n");
		}
	}
	else {printf("failed in exam\n");
	}
	return 0;
	}
	
