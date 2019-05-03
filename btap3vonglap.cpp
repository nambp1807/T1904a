#include<stdio.h>
#include<math.h>
	int main(){
		
		int n;
		scanf("%d",&n);
		int m=1;
		if(n<2) m=0; // khong la so nguyen to
		else{
			for(int i =2; i<=sqrt(n); i++)
			if(n%i==0) m=0;
		}
		if(m==1)
			printf("%d la so nguyen to",n);
		else
			printf("%d khong la so nguyen to",n);
		return 0 ;
			}
