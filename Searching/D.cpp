#include <stdio.h>
#include <string.h>

struct Mahasiswa {
	char name[20];
	int score;
};


int main(){
	
	int test;
	scanf ("%d", &test);
	
	for (int x = 1; x <= test; x++){
		int size;
		scanf("%d", &size);
		
		Mahasiswa mhs[size];
		
		for (int i = 0; i < size; i++) scanf ("%s#%d", mhs[i].name, mhs[i].score);
		
		
		
	}
	
	return 0;
}
