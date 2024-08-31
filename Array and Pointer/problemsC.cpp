#include <stdio.h>

int main(){
	
	int size;
	scanf("%d", &size);
	
	int price[size];
	
	for (int a = 0; a < size; a++){
		scanf("%d", &price[a]);
	}
	
	int perubahan;
	scanf("%d", &perubahan);
	
	for (int a = 0; a < perubahan; a++){
		
		int index, change;
		
		scanf("%d %d", &index, &change);
		
		price[index-1] = change;
		
		printf("Case #%d: ", a+1);
		
		for (int i = 0; i < size; i++){
			
			if (i + 1 == size){
				printf("%d", price[i]);
			}
			
			else {
				printf("%d ", price[i]);
			}
			
		}
		
		printf("\n");
		
	}
	
	return 0;
}
