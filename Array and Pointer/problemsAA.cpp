#include <stdio.h>

int main(){
	
	long long int count;
	scanf("%lld", &count);
	
	long long int room[count];
	
	int same = 0;
	
	for (long long int i = 0; i < count; i++){
		scanf("%lld", &room[i]);
	}

	// Bubblesort
	
	int temp;
    int swapped;

    for (int i = 0; i < count - 1; i++) {
        swapped = 0; // Flag to check if any swap is made in the inner loop

        for (int j = 0; j < count - i - 1; j++) {
            if (room[j] > room[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = room[j];
                room[j] = room[j + 1];
                room[j + 1] = temp;
                swapped = 1; // Set the flag to 1 to indicate a swap was made
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (swapped == 0) {
            break;
        }
    }
    
    int tester = 0;
	
	for (int j = 0; j < count; j++){
		
		if (room[j] != tester){
			tester = room[j];
			same++;
		}
		
	}
	
	printf("%d\n", same);
	
	return 0;
}
