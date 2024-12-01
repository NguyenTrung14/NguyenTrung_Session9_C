#include<stdio.h>
int main(){
	int select, a=10;
	int arr[100], value;
	int quantity, index, valueItem, number;
	int max=0, min;
	do{
		printf("   MENU \n \n1. Nhap so phan tu can nhap va gia tri cua cac phan tu \n2. In ra cac gia tri phan tu dang xu ly \n3. In ra gia tri cac phan tu chan va tinh tong \n4. In ra gia tri lon nhat trong mang \n5. In ra cac phan tu la so nguyen to trong va tinh tong \n6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do \n7. Them mot phan tu vao vi tri chi dinh \n8. Thoat \n");
		scanf("%d", &select);
		printf("\n \n \n");
		if(select==8){
			a=0;
			break;
		}
		for(int i=1;i<8;i++){
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
		index=0;
		if(i==3){
			printf("\n3. \n");
			printf("Cac phan tu chan la : ");
			for(int j=0;j<quantity;j++){
				if(arr[j]%2==0){
					printf("%d ",arr[j]);
					index += arr[j];
				}
			}
			printf("\nTong cac so chan la : %d",index);
		}
		if(i==4){
			printf("\n4. \n");
			for(int j=0;j<quantity;j++){
				if(max<arr[j]){
					max=arr[j];
				}
				if(min>arr[j]){
					min=arr[j];
				}
			}
			printf("Gia tri lon nhat trong mang la : %d\nGia tri nho nhat trong mang la : %d",max ,min);
		}
		index=0;
		if(i==5){
			printf("\n5. \n");
			for(int j=0;j<quantity;j++){
		        if((arr[j]%2!=0 && arr[j]%3!=0 && arr[j]%5!=0 && arr[j]%7!=0) || arr[j]==2 || arr[j]==3 || arr[j]==5 || arr[j]==7){
		        	printf("%d ",arr[j]);
		        	index+=arr[j];
			}
		}
		printf("Tong cac so nguyen to la : %d",index);
		}
		index=0;
		if(i==6){
			printf("\n6. \n");
			printf("Moi ban nhap gia tri ban muon kiem tra so luong phan tu trong mang : ");
			scanf("%d", &value);
			for(int j=0;j<quantity;j++){
				if(value==arr[j]){
					index+=1;
				}
			}
			printf("Phan tu ban muon kiem tra co so luong trong mang la : %d",index);
		}
		if(i==7){
			printf("\n7. \n");
	printf("Moi ban nhap so ban muon them vao : ");
	scanf("%d", &valueItem);
	printf("Moi ban nhap vi tri ban muon them vao : ");
	scanf("%d", &index);
	for(int j=(quantity-1);j>index;j--){
		arr[j]=arr[j-1];
	}
	arr[index]=valueItem;
	for(int j=0;j<(quantity+1);j++){
		printf("%d ",arr[j]);
	}
		}
		printf("\n \n");
	}
	} while(a>5);
	return 0;
}
