#include<stdio.h>
int main (){
  int tongchan=0;
  int tongle=0;
  int a, b ,c, d, e;
  printf("nhap vao 5 so nguyen:\n");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  if (a%2!=0){
  	tongle++;
  }else{
  	tongchan++;
  }
  if(b%2!=0){
  		tongle++;
  	}else{
  		tongchan++;
	  }
  		if(c%2!=0){
  			tongle++;
  		}else{
  			tongchan++;
		  }
  			if(d%2!=0){
  				tongle++;
			  }else{
			  	tongchan++;
			  }
			  if(e%2!=0){
			  	tongle++;
			  }else{
			  	tongchan++;
			  }
	printf("ket qua cac so le la: %d\n",tongle);
	printf("ket qua cac so le la: %d",tongchan);		  
  return 0;
}
