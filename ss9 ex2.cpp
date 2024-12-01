#include<stdio.h>
int main(){
	int arr[100]={1,2,4,5,6};
	int index=10, valueItem;
	while(index>5){
	printf("Moi ban nhap vi tri ban xoa di : ");
	scanf("%d", &index);
	}
	printf("Moi ban nhap gia tri thay doi : ");
	scanf("%d", &valueItem);
	arr[index]=valueItem;
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
