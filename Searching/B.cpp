#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Mahasiswa {
	char nim[20];
	char name[100];
};

int main(){
	
	FILE *fp = fopen ("testdata.txt", "r");
	
	int size;
	fscanf (fp, "%d", &size);
	
	Mahasiswa mhs[255];
	
	for (int counter = 0; counter < size; counter++){
		fscanf (fp, "%s %s", mhs[counter].nim, mhs[counter].name);
	}
	
//	while (!feof (fp)){
//		fscanf (fp, "%s %s", mhs[counter].nim, mhs[counter].name);
//		counter++;
//	}
	
	int test;
	fscanf (fp, "%d", &test);
	
	for (int i = 0; i < test; i++){
		char comparison[20];
		fscanf (fp, "%s", comparison);
		
		bool flag = false;
		
		printf ("Case #%d: ", i+1);
		
		for (int x = 0; x < size; x++){
			if (strcmp (comparison, mhs[x].nim) == 0){
				printf ("%s\n", mhs[x].name);
				flag = true;
				break;
			}
		}
		
		if (!flag) printf ("N/A\n");
		
	}
	
	fclose (fp);
	
	return 0;
}
