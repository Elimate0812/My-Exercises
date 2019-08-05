#include<stdio.h>

void shift_tower(int n,char A,char B,char C){
	if(n == 1){
		printf("Move sheet %d from %c to %c.\n",n,A,C);
	}
	else{
		shift_tower(n-1,A,C,B);
		printf("Move sheet %d from %c to %c.\n",n,A,C);
		shift_tower(n-1,B,A,C);
	}
}

int main(void){
	int n ;
	printf("Please input a number as the amount of the dishes:");
	scanf("%d",&n);
	char X,Y,Z;
	shift_tower(n,'X','Y','Z');
	return 0;
}


