#include <stdio.h>

int main(){
	
	int test;
	scanf ("%d", &test);
	
	for (int i = 0; i < test; i++){
		int size, min;
		scanf ("%d %d", &size, &min);
		int count = 0;
		for (int a = 0; a < size; a++){
			int temp;
			scanf ("%d", &temp);
			if (temp >= min) count++;
		}
		printf ("Case #%d: %d\n", i+1, count);
	}
	
	return 0;
}
