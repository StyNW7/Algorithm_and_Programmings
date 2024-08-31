#include <stdio.h>

int main(){
	
	int row;
	scanf("%d", &row);
	int coloumn;
	scanf("%d", &coloumn);
	
	int garden[row][coloumn];
	
	for (int a = 0; a < row; a++){
		for (int b = 0; b < coloumn; b++){
			scanf("%d", &garden[a][b]);
		}
	}
	
	int change;
	scanf("%d", &change);
	
	for (int i = 0; i < change; i++){
		int x, y, changer;
		scanf("%d %d %d", &x, &y, &changer);
		garden[x-1][y-1] = changer;
	}
	
	for (int a = 0; a < row; a++){
		for (int b = 0; b < coloumn; b++){
			if (b + 1 == coloumn){
				printf("%d", garden[a][b]);
			}
			
			else {
				printf("%d ", garden[a][b]);
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
