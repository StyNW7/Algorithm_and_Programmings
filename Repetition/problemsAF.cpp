#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int a = 1; a <= test; a++){
		
		int size;
		scanf("%d", &size);
		
		int nums[size];
		for (int i = 0; i < size; i++){
			scanf("%d", &nums[i]);
		}
		
		int total = 0;
		int counter = 0;
		
		for (int x = 0; x < size; x++){
			for (int y = 0; y < size; y++){
				if (x != y && x < y){
					total++;
					int result = nums[x] ^ nums[y];
					int temp[32];
					int index = 0;
					int sizeCounter = 0;
					while (result > 0){
						temp[index++] = result % 2;
						result /= 2;
						sizeCounter++;
					}
					int checker = 0;
					for (int c = 0; c < sizeCounter; c++){
						if (temp[c] == 1) checker++;
					}
					if (checker >= 3) counter++;
				}
			}
		}
		
		printf("Case #%d: %d %d\n", a, counter, total-counter);
		
	}
	
	return 0;
}
