#include<stdio.h>
#include<math.h>
int main(){
	int tien, thang;
	float lai;
	printf("nhap vao so tien gui: ");
	scanf("%d",&tien);
	printf("nhap vao so lai: ");
	scanf("%f",&lai);
	printf("nhap vao so thang gui: ");
	scanf("%d",&thang);
	float tienlai=tien*(float)lai*thang;
	float tiennhanduoc=tien+tienlai;
	printf("so tien lai la: %f\n",tienlai);
	printf("so tien nhan lai la: %f\n",tiennhanduoc);	 
	return 0;
}
