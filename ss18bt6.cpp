#include<stdio.h>
#define Size 6
int findlenment(int *arr,int size,int target){
	for(int i=0;i<size;i++){
		if(*(arr+i)==target){
			return i;
		}
	}
	return -1;
	
}
int main(){
	int arr[Size]={2,4,5,6,1,7};
	int target=7;
	int position=findlenment(arr,Size,target);
	if(position!=-1){
		printf("gia tri %d duoc tim thay tai vi tri %d\n",target,position);
	}else{
		printf("gia tri %d khong duoc tim thay\n");
	}
	return 0;
}

