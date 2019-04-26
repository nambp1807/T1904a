#include<stdio.h>

	int main(){
		char ci;
		printf("nhap vao 1 so tu ban phim \n");
		scanf("%c",&ci);
		switch(ci){
			case '2': printf("hom nay la thu 2\n");break;
			case '3': printf("hom nay la thu 3\n");break;
			case '4': printf("hom nay la thu 4\n");break;
			case '5': printf("hom nay la thu 5\n");break;
			case '6': printf("hom nay la thu 6\n");break;
			case '7': printf("hom nay la thu 7\n");break;
			case '8': printf("hom nay la chu nhat \n");break;
			default: printf("khong phai ngay trong tuan");break;}
		return 0;
	 }
