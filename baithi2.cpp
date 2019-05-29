#include<stdio.h>


	int main(){
	int n;
	printf("nhap m tu ban phim : \n");
	scanf("%d",&n);
	int m;
	printf("nhap n tu ban phim : \n");
	scanf("%d",&m);
	 int dem =0;
		for(int i=n;i <= m;i++)
				{
					if(n%i==0)
						{
						 dem++;
						}
				
			if(dem==2)
				{
					printf("%d la so nguyen to",n,m);
				}
	}
			
			
		
		
		
		
		
		return 0;
	}
