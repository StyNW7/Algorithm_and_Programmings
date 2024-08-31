#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		int size;
		scanf("%d", &size);
		
		int nums [size];
		
		for (int a = 0; a < size; a++){
			scanf("%d", &nums[a]);
		}
		
		int count = 0;
		bool flag;
		
		for (int x = 0; x < size; x++){
			for (int y = 0; y < size; y++){
				for (int z = 0; z < size; z++){
					
					if (x == y){
						break;
					}
					
					if (x == z || y == z){
						continue;
					}
					
					if (nums[x] == nums[y] + nums[z] && y != x && z != x && y != z){
						count++;
						flag = true;
						break;
					}
					
				}
				
				if (flag == true){
					flag = false;
					break;
				}
				
			}
		}
		
		printf("Case #%d: %d\n", i, count);
		
	}
	
	return 0;
}
