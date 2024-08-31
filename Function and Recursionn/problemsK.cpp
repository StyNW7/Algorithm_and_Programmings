#include <stdio.h>
#include <string.h>

int main() {
    
    int f0, f1;
    scanf("%d %d", &f0, &f1);
    int position;
    scanf("%d", &position);
    
    if (position == 0){
    	printf("%d\n", f0);
	}
	
	else if (position == 1){
		printf("%d\n", f1);
	}
	
	else if (position >= 2){
		
		int temp;
		
		for (int j = 2; j <= position; j++){
			
			temp = f1;
			temp += f0;
			f0 = f1;
			f1 = temp;
			
		}
		
		printf("%d\n", temp);
		
	}

    return 0;
}

