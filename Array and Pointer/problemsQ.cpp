#include <stdio.h>
#include <string.h>

int main(){
	
	int test;
	scanf("%d", &test);
	getchar();
	
	for (int i = 1; i <= test; i++){
		
		int friends, ruangan, friendList;
		scanf("%d %d %d", &friends, &ruangan, &friendList);
		
		int lightList[friends][ruangan];
		
		for (int a = 0; a < friends; a++){
			for (int b = 0; b < ruangan; b++){
				
				scanf("%d", &lightList[a][b]);
				
			}
		}
		
		int friendLight
		
		for (int a = 0; a < friendList; a++){
			scanf("%d", &friendLight[a]);
		}
		
		int light[ruangan] = {0};
		
		for (int x = 0; x < friendList; x++){
			
			light[x] = lightList[friendLight][]
			
		}
		
	}
	
	return 0;
}
