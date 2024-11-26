#include<stdio.h>
int main(){
	int n;
	printf("nhap vao so can kiem tra: ");
	scanf("%d",&n);
	if(n<=1){
		printf("day khong phai la so nguyen to");
	}else if(n>1){
		if(n==2){
			printf("day la so nguyen to");
		}
		for(int i=2;i<n;i++){
			if(n%i!=0){
				printf("day la so nguyen to");
			}
			
		}
	}
	return 0;
	
	 
}
