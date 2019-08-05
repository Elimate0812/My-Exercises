#include<stdio.h>
// to solve a Fibonacci problem
int fibonacci(int n){
	int result = 0;
	if(n == 0 or n==1){
		result = n;
	}
	else{
		if(n < 0){
			printf("Wrong type! Please input again!");
		}
		if(n > 0){
			result = fibonacci(n-1) + fibonacci(n-2);
		}
	}
	return result;
}
int main(){
	printf("We can calculate how many rabbits there would be , please input n as the amount of years:");
	int n,amount;
	scanf("%d",&n);
	amount = fibonacci(n);
	printf("There would be %d rabbits!",amount);
	return 0;
}
