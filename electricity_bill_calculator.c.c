#include <stdio.h>
#include <conio.h>
int main(){
	int units;
	int bill =0;
	printf ("enter the units:");
	scanf("%d",&units);
	if(units<100){
		bill=0;
		printf("no charges\n");
	}else if(units<=200){
		bill =(units-100)*5;
	}else if (units<=300){
		bill =(100*5) + (units-200)*8;
	}else if(units>300){
		bill = (100*5) + (100*8) +(units-300)*10;	
	}if (units > 100) {
        printf("bill: %d", bill);
    }

    return 0;
}
