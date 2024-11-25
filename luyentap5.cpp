#include<stdio.h>
int main(){
	int nam, thang;
	printf("nhap vao nam:");
	scanf("%d",&nam);
	printf("nhap vao thang:");
	scanf("%d",&thang);
	switch(thang){
		case 1: case 3: case 5: case 8: case 10: case 12: case 7:
			printf("thang nay co 31 ngay cua nam %d",nam);
			break;
		case 4: case 6: case 9: case 11:
			printf("thang nay co 30 ngay cua nam %d",nam);
			break;
		case 2:
			if((nam%400==0)&&(nam%4==0&&nam%100!=0)){
				printf("thang nay co 29 ngay cua nam %d",nam);
			}else{
				printf("thang nay co 28 ngay cua nam %d",nam);
			}
			break; 
			default:
			printf("du lieu ko hop le");
	}
	return 0; 
}
