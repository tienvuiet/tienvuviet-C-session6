#include<stdio.h>
int main(){
	int n;
	while (1){
		printf("nhap mat khau cua ban: ");
		scanf("%d",&n);
		if(n==151906){ 
		  goto su_perman;
		}else{
			printf("nhap lai:\n");
		}
	}
	su_perman:
	printf("nhap dung r day");
	return 0;
}
