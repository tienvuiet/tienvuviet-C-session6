#include<stdio.h>
#include<math.h> 
int main(){
	float a, b, c;
	float x,x1,x2;
	printf("nhap vao 3 so a, b, c:\n");
	scanf("%f %f %f",&a ,&b, &c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh vo so nghiem");
			}else{
				printf("phuong trinh vo nghiem");
			}
		}else{
			x=(float)-c/b;
			printf("phuong trinh co nghiem duy nhat:%f ",x);
		}
	}else{
		float dt=b*b-4*a*c;
		if(dt<0){
			printf("phuong trinh vo nghiem");
		}else if(dt==0){
			x=(float)-b/(2*a);
			printf("phuong trinh co nghiem kep:%f ",x);
		}else{
			x1=(float)(-b+sqrt(dt)/2*a);
			x2=(float)(-b-sqrt(dt)/2*a);
			printf("nghiem thu 1 la:%d ",x1);
			printf("nghiem thu 2 la:%d ",x2);	
		}
	}
	return 0;
}
