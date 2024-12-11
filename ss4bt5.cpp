#include<stdio.h>
int main(){
	int a,b,c;
	printf("moi ban nhap so thu nhat: ");
	scanf("%d",&a);
	printf("moi ban nhap so thu hai: ");
	scanf("%d",&b);
	printf("moi ban nhap so thu ba: ");
	scanf("%d",&c);
	if((a<c&&b>c)||(b<c&&a>c)){
		printf("so thu ba nam giua so thu nhat va thu hai");
	}else{
		printf("so thu ba khong nam giua so thu nhat va thu hai");
	}
	return 0;
}
