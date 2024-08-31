#include <stdio.h>

int main(){
	
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++){
		
		int size;
		scanf("%d", &size);
		
		int matrix1[size][size];
		int matrix2[size][size];
		int matrix3[size][size];
		
		for (int a = 0; a < size; a++){
			for (int b = 0; b < size; b++){
				scanf("%d", &matrix1 [a][b]);
			}
		}
		
		for (int a = 0; a < size; a++){
			for (int b = 0; b < size; b++){
				scanf("%d", &matrix2 [a][b]);
			}
		}
		
		for (int a = 0; a < size; a++){
			for (int b = 0; b < size; b++){
				scanf("%d", &matrix3 [a][b]);
			}
		}
		
		int result[size][size];
		
		for (int x = 0; x < size; x++){
			for (int z = 0; z < size; z++){
				
				result[x][z] = 0;
				
				for (int y = 0; y < size; y++){
					
					result[x][z] += matrix1[x][y] * matrix2[y][z];
					
				}
				
			}
		}
		
		int final[size][size];
		
		for (int x = 0; x < size; x++){
			for (int z = 0; z < size; z++){
				
				final[x][z] = 0;
				
				for (int y = 0; y < size; y++){
					
					final[x][z] += result[x][y] * matrix3[y][z];
					
				}
				
			}
		}
		
		printf("Case #%d:\n", i+1);
		
		for (int a = 0; a < size; a++){
			
			for (int b = 0; b < size; b++){
				if (b + 1 == size){
					printf("%d", final[a][b]);
				}
				else {
					printf("%d ", final[a][b]);
				}
			}
			printf("\n");
			
		}
		
	}
	
	return 0;
}
