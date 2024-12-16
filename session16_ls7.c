#include<stdio.h> 
void printfArray(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
void updateArray(int *arr,int size){
	for(int j =0;j<size-1;j++){
		for(int i=0;i<size-j-1;i++){
	       if(arr[i]>arr[i+1]){
	    	int temp=arr[i];
	    	arr[i] = arr[i+1];
	    	arr[i+1]=temp; 
        	}
        }
	} 
}
int main(){
	int arr[]={4,3,2,7,6,5};
	int size= sizeof(arr)/sizeof(int);
	printf("mang truoc khi sap xep\n");
	printfArray(arr,size);
	updateArray(arr,size);
	printf("mang sau khi sap xep\n");
	printfArray(arr,size);
	return 0; 
}
