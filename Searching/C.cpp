#include <stdio.h>

int main(){
	
	int size, test;
	scanf ("%d %d", &size, &test);
	
	int num[1000] = {0};
	for (int i = 0; i < size; i++){
		int index;
		scanf ("%d", &index);
		num[index]++;
	}
	int max = -1;
	for (int x = 0; x < test; x++){
		int temp;
		scanf ("%d", &temp);
		
		num[temp] = 0;
	}
	for (int a = 999; a >= 0; a--){
		if (num[a] >= 1){
			max = a;
			break;
		}
	}
	
	printf ("Maximum number is %d\n", max);
	
	return 0;
}
