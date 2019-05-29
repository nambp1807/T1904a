#include<stdio.h>

	int isPrime(int number);
	int dem =0;
	
	for(int i=0;i<=number;i++)
	{
			if(number%i==0)
			{
	     		dem++;
					
			}
		if(dem==2)
			{
				printf("%d la so nguyen to \n");
			}
		else
			{
				return 0;
			}
	}
	


	int main(){
	int number;
	printf("nhap so a tu ban phim : \n");
	scanf("%d",&number);
	
	
		return 0;
	}
