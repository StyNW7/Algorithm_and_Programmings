#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 1; i <= test; i++){
		
		int size;
		scanf("%d", &size);
		
		int arr[size];
		
		for (int a = 0; a < size; a++){
			scanf("%d", &arr[a]);
		}
		
		bool flag = false;
		int start = 1;
		
		for (int x = 0; x < size; x++){
			
			int z = 0;
			int count1 = 0;
			int count2 = 0;
			
			for (z; z < start; z++){
				
				count1 += arr[z];
				
			}

			for (int y = z; y < size; y++){
				
				count2 += arr[y];
				
			}
			
			if (count1 == count2){
				flag = true;
				break;
			}
			
//			if (x * 2 == size){
//				break;
//			}
			
			start++;
			
		}
		
		if (flag){
			printf("Case #%d: Yes\n", i);
		}
		
		else {
			printf("Case #%d: No\n", i);
		}
		
		
	}
	
	return 0;
}
