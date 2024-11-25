#include<stdio.h>
int main (){
  int tong=0;
  int a, b ,c, d, e;
  printf("nhap vao 5 so nguyen:\n");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  if (a%2!=0){
  	tong=tong+a;
  }
  if(b%2!=0){
  		tong=tong+b;
  	}
  		if(c%2!=0){
  			tong=tong+c;
  		}
  			if(d%2!=0){
  				tong=tong+d;
			  }
			  if(e%2!=0){
			  	tong=tong+e;
			  }
	printf("ket qua la: %d",tong);		  
  return 0;
}
