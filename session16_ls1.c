#include<stdio.h> 
int main(){
	int number=13;
	int *numberptr=&number;
	printf("dia chi cua bien number la: %lu\n",&number);
	printf("dia chi cua bien number la: %lu\n",numberptr);
	printf("phan tu cua bien number co gia tri la: %d\n",number);
	printf("phan tu cua bien number co gia tri la: %d",*numberptr);
	
	return 0; 
}
