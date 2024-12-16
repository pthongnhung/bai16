#include<stdio.h> 
void swap(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp; 
}
int main(){
	int num1=13;
	int num2=12; 
	printf("so truoc khi hoan doi la num1=%d va num2 =%d\n",num1,num2);
	swap(&num1,&num2);
	printf("so sau khi hoan doi la num1=%d va num2 =%d\n",num1,num2);
	return 0; 
}
