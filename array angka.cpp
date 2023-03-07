#include <stdio.h>

int main(){
    int n;
	//deklarasi angka
	int angka[100];
	//meminta banyaknya angka
	printf("Masukkan banyaknya bilangan yang diinginkan : "); 
	scanf("%d", &n); 
	//meminta inputan angka
	for(int i=0; i<n; i++){
		printf("Masukkan angka ke %d : ", i+1); 
		scanf("%d", &angka[i]); 
	}
	//mencetak angka
		for(int i=0; i<n; i++){
			printf("Angka ke %d : %d\n", i+1, angka[i]);
	}
	getchar();
        return 0;
}
