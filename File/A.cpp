#include <stdio.h>
#include <string.h>

struct Plants {
	char depan[1001];
	char belakang[1001];
};

int main(){
	
	FILE *input = fopen ("testdata.in", "r");
	
	int size;
	fscanf (input, "%d\n", &size);
	
	Plants plant[size+1];
	
	for (int i = 0; i < size; i++){
		fscanf (input, "%[^#]#%[^\n]\n", plant[i].depan, plant[i].belakang);
	}
	
	int search;
	fscanf (input, "%d\n", &search);
	
	for (int x = 0; x < search; x++){
		bool flag = false;
		char searching[1001];
		fscanf (input, "%s\n", searching);
		for (int a = 0; a < size; a++){
			if (strcmp(plant[a].depan, searching) == 0){
				printf ("Case #%d: %s\n", x+1, plant[a].belakang);
				flag = true;
				break;
			}
		}
		if (!flag) printf ("Case #%d: N/A\n", x+1);
	}
	
	return 0;
}
