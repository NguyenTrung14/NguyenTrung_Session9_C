#include<stdio.h>
int main(){
	int arr[100]={1,2,4,5,6};
	int index, valueItem;
	int number;
	printf("Moi ban nhap so luong ban muon thay doi : ");
	scanf("%d", &number);
	for(int i=0;i<number;i++){
		printf("Moi ban nhap gia tri ban muon thay doi : ");
		scanf("%d", &valueItem);
		printf("Moi ban nhap vi tri ban muon thay doi : ");
		scanf("%d", &index);
		arr[index]=valueItem;
	}
	for(int i=0;i<100;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
