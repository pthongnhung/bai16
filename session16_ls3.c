#include<stdio.h> 
int calculate(int *x, int *y){
	int total= *x + *y;
	return total; 
}
int main(){
	int num1=13;
	int num2=12;
	 printf("tong 2 so %d va %d la: %d",num1,num2,calculate(&num1,&num2));
	return 0; 
}
