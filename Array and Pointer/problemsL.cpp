#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	int index[test];
	int num[test];
	
	for (int i = 0; i < test; i++){
		
		scanf("%d", &index[i]);
		
	}
	
	for (int a = 0; a < test; a++){
		scanf("%d", &num[a]);
	}
	
	int value[test];
	
	for (int b = 0; b < test; b++){
		value[index[b]] = num[b];
	}
	
	for (int x = 0; x < test; x++){
		if (x == test-1){
			printf("%d\n", value[x]);
		}
		else {
			printf("%d ", value[x]);
		}
	}
	
	return 0;
}
