#include<stdio.h>
int main(){
	int select, a=10;
	int arr[100], value;
	int quantity, index, valueItem, number;
	do{
		printf("1. Nhap vao mang \n2. Hien thi mang \n3. Them phan tu \n4. Sua phan tu \n5. Xoa phan tu \n6. Thoat \n");
		scanf("%d",&select);
		printf("\n \n \n");
		if(select==6){
			break;
		}
	for(int i=1;i<6;i++){
		if(i==1){
			printf("1. \n");
			printf("Moi ban nhap so luong cua mang : ");
			scanf("%d", &quantity);
			for(int j=0;j<quantity;j++){
				printf("Moi ban nhap gia tri cho phan tu thu %d : ",j+1);
				scanf("%d", &value);
				arr[j]=value;
			}
		}
		printf("\n");
		if(i==2){
			printf("2. \n");
			printf("Mang co gia tri la : ");
			for(int j=0;j<quantity;j++){
				printf("%d  ",arr[j]);
			}
		}
		if(i==3){
			printf("\n3. \n");
	    	printf("Moi ban nhap so ban muon them vao : ");
            scanf("%d", &valueItem);
	        printf("Moi ban nhap vi tri ban muon them vao : ");
	        scanf("%d", &index);
	        for(int i=6;i>index;i--){	
		        arr[i]=arr[i-1];
        	}
	        arr[index]=valueItem;
	        for(int i=0;i<6;i++){
	        	printf("%d",arr[i]);
	        }
		}
		if(i==4){
			printf("\n4. \n");
			index = 10;
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
		}
		if(i==5){
			printf("\n5. \n");
			printf("Moi ban nhap so luong ban muon thay doi : ");
	scanf("%d", &number);
	for(int i=0;i<number;i++){
		printf("Moi ban nhap gia tri ban muon thay doi : ");
		scanf("%d", &valueItem);
		printf("Moi ban nhap vi tri ban muon thay doi : ");
		scanf("%d", &index);
		arr[index]=valueItem;
	}
	for(int i=0;i<index;i++){
		printf("%d",arr[i]);
	}
		}
	}
	} while(a>10);
	return 0;
}
