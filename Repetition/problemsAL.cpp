#include <stdio.h>
#include <string.h>

int main() {
    
    int weapon;
    scanf("%d", &weapon);
	int dragon;
    scanf("%d", &dragon);
    
    int tempWeapon, tempDragon;
    int weapon2 = 0;
    int dragon2 = 0;
    
    for (int i = 0; i < weapon; i++){
    	
    	tempWeapon = weapon2;
    	scanf("%d", &weapon2);
    	
    	if (tempWeapon > weapon2){
    		weapon2 = tempWeapon;
		}
		
	}
	
	for (int i = 0; i < dragon; i++){
    	
    	tempDragon = dragon2;
    	scanf("%d", &dragon2);
    	
    	if (tempDragon > dragon2){
    		dragon2 = tempDragon;
		}
		
	}
	
	printf("%d %d", weapon2, dragon2);
    
//    if (weapon2 > dragon2){
//    	printf("The dark secret was true\n");
//	}
//	
//	else {
//		printf("Secret debunked\n");
//	}

    return 0;
}
