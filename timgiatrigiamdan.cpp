#include<stdio.h>

int main()
	{
		int i,j,temp;
		int n;
		do{
        scanf("%d", &n);
        if(n <2){
        	printf("so luong phan tu cua mang it nhat phai tren hai phan tu \n");
        }
    }while(n <2);
    int mang[n];
    	printf(" nhap vao %d phan tu cua mang :\n ",n);
    for(int i = 0; i < n; i++)
		{
        	printf("Nhap phan tu thu [%d] = ",i);
       		scanf("%d",&mang[i]);
       	}
       	for(int i=0;i<n-1;i++)
			{
				for(int j=0;j<n-i-1;j++)
					{
						if(mang[j]<mang[j+1])
							{
								int temp=mang[j];
								mang[j]=mang[j+1];
								mang[j+1]=temp;
							}
					}
			}
				printf(" mang duoc sap xep theo thu tu giam dan :");
				for(int i = 0; i <=n-1; i++)
					{
						printf(" %d ", mang[i]);
					}
			return 0;
	}
