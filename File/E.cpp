#include <stdio.h>

int main(){
	
	FILE *input = fopen ("data.txt", "r");
	int test;
	fscanf (input, "%d\n", &test);
	
	for (int i = 1; i <= test; i++){
		
		int size;
		fscanf (input, "%d\n", &size);
		
		int ice[1001];
		
		long long int area = 0, perimeter = 0;
		
		for (int x = 0; x < size; x++){
			
			if (x + 1 == size) {
				fscanf (input, "%d\n", &ice[x]);
				area += ice[x];
			}
			else {
				fscanf (input, "%d ", &ice[x]);
				area += ice[x];
			}
			
		}
		
		area *= 4;
		
		for (int a = 0; a < size; a++){
			
			if (a == 0) {
				perimeter += (4 + (ice[a]*2));
			}
			
			else if (a + 1 == size) {
				perimeter += (4 + (ice[size-1]*2));
				if (ice[a] > ice[a-1]){
					int selisih = ice[a] - ice[a-1];
					perimeter += (2 * selisih);
				}
				else if (ice[a] < ice[a-1]){
					int selisih = ice[a-1] - ice[a];
					perimeter += (2 * selisih);
				}
			}
			
			else {
				
				if (ice[a] > ice[a-1]){
					int selisih = ice[a] - ice[a-1];
					perimeter += (2 * selisih);
				}
				else if (ice[a] < ice[a-1]){
					int selisih = ice[a-1] - ice[a];
					perimeter += (2 * selisih);
				}

				perimeter += 4;
				
			}
			
		}

		printf ("Case #%d: %lld %lld\n", i, perimeter, area);
		
	}
	
	return 0;
}
