#include <stdio.h>

int main(){
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
 	scanf("%d",&z);
 	while(x>=y+z||y>=x+z||z>=x+y){printf("day kh phai la 3 canh cua 1 tam giac");
 	scanf("%d",&x);
 	scanf("%d",&y);
 	scanf("%d",&z);}
 	printf("day la 3 canh cua 1 tam giac");
 	return 0;
 	}
