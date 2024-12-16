#include<stdio.h> 
void  printfArray(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("arr[%d]=%d\n",i,*(arr+i));
	}
}
int main(){
	int arr[]={1,2,3,4,5,6};
	int size=sizeof(arr)/sizeof(int);
	printfArray(arr,size);
	return 0; 
} 
