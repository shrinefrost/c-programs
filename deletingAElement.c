#include<stdio.h>
int main() {
	int choice;
	int arr[]={1,2,3,4,5,6,6,5,4,4,3,3,2};
	printf("enter a specified location to delete from: 0 to %d: ",sizeof(arr)/4-1);
	scanf("%d",&choice);
	int i=choice;
	
	if(choice >sizeof(arr)/4-1 || choice<0){
		printf("you have enter invalid index of a array");
	}
	
	else{
		
		for(;i<sizeof(arr)/4-2;i++){
			arr[i]=arr[i+1];
		}
		
		printf("after removing the element the array is: ");
		i=0;
		for(;i<sizeof(arr)/4;i++){
			printf("\n%d",arr[i]);
		}
	}
	
}
