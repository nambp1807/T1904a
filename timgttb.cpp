#include<stdio.h>

	int main(){
		int n=10;
		int mang[n];
		for(int i=0;i<10;i++){
		
		printf("\n");
        		printf("Nhap phan tu thu [%d] = ",i);
       			scanf("%d",&mang[i]);
       		}
  		 int a, b;
   			float c;
   			a = c = 0;
   			for(b = 0; b < n; b++) 
			   {
      				a = a + mang[b];
   				}
   			c = (float)a / b; 
			printf("        Gia tri trung binh cua mang la: %d", c); 
		return 0;
	}
