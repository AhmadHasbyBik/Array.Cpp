#include <stdio.h>

int main(){
        int n;
	//deklarasi array 2 dimensi untuk nama
	int nama[100][100];
	//meminta inputan banyaknya nama yang diinginkan
	printf("Masukkan banyaknya nama yang diinginkan : "); 
	scanf("%d", &n); 
	fflush(stdin);

	//meminta inputan nama
	for(int i=0; i<n; i++){
		printf("Masukkan nama ke %d : ", i+1); 
		scanf("%[^\n]", &nama[i]); 
		fflush(stdin);
	}
	//mencetak nama
	for(int i=0; i<n; i++){
		printf("Nama ke %d : %s\n", i+1, nama[i]);
	}
	getchar();
        return 0;
}

