#include<stdio.h> 
void findIndex(int *arr, int value,int size){
	for(int i=0;i<size;i++){
		if(value==arr[i]){
			printf("%d",i);
		}
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int size=sizeof(arr)/sizeof(int);
	findIndex(arr,4,size);
	
	return 0; 
}
