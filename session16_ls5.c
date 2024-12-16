#include<stdio.h> 
void printfArray(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
	void updateElement(int *arr,int newValue,int position){
		arr[position] = newValue; 
	}
int main(){
	int arr[] ={1,2,3,4,5,6,7,8};
	int size=sizeof(arr)/sizeof(int);
	printf("mang truoc khi thay doi\n");
	printfArray(arr,size);
	updateElement(arr,24,2); 
	printf("mang sau khi cap nhat\n");
	printfArray(arr,size);
	return 0; 
}
