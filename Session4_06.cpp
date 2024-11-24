#include <stdio.h>
int main(){
	int old;
	int newindex, hieu, money;
	printf("Nhap cong to dien cu:");
	scanf("%d", &old);
	printf("Nhap cong to dien moi:");
	scanf("%d", &newindex);
	hieu = newindex - old;
	if(hieu >= 0 && hieu < 50){
		money = hieu * 10000;
		printf("tien dien trong thang la: %ld", money);
	} else if(hieu >= 50 && hieu < 100){
		money = hieu * 15000;
		printf("tien dien trong thang la: %ld", money);
	} else if(hieu >= 100 && hieu < 150){
		money = hieu * 20000;
		printf("tien dien trong thang la: %ld", money);
	} else if(hieu >= 150 && hieu < 200){
		money = hieu * 25000;
		printf("tien dien trong thang la: %ld", money);
	} else if(hieu >=200){
		money = hieu * 30000;
		printf("tien dien trong thang la: %ld", money);
	} else {
		printf("loi");
	}
	return 0;
}
