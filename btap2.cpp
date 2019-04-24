#include<stdio.h>	

 	int main(){
 		
 			int a ;
		printf("nhap so a tu ban phim :\n");
		scanf("%d",&a);
				int b ;
		printf("nhap so b tu ban phim :\n");
		scanf("%d",&b);
			int c ;
		printf("nhap so c tu ban phim :\n");
		scanf("%d",&c);
		 int max ;
		 // gan max =a
		 max=a;
		 if(max<b)
		 max=b;
		 if(max<c)
		 max=c;
		 printf("\n max là %d",max);
		 int min;
		 //gan min =a
		 min=a;
		 if(min>b)
		 min=b;
		 if(min>c)
		 min=c;
		 printf("\n min la %d",min);
		 }
