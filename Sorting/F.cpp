#include <stdio.h>


int main(){
	
	int size;
	scanf("%d", &size);
	
	char kelas[size];
	int num[size];
	
	for (int i = 0; i < size; i++){
		scanf("%s", kelas[i]);
		scanf("%d", num[i]);
	}
	
	
	
	return 0;
}
