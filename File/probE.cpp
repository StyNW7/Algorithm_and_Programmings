#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	int T;
	FILE *fp = fopen("testdata.in", "r");
	fscanf(fp, "%d\n", &T);
	for(int i = 1; i <= T; ++i){
		int rep;
		fscanf(fp, "%d\n", &rep);
		int area = 0, perimeter = 0, prev = 0;
		for(int j = 0; j < rep; j++){
			int curr;
			fscanf(fp, "%d", &curr); fgetc(fp);
			area += curr;
			perimeter += 4;
			if(j == 0) perimeter += curr*2;
			if(j == rep-1) perimeter += curr*2;
			if(prev) perimeter += abs(curr-prev)*2;
			prev = curr;
		}
		
		printf("Case #%d: %d %d\n",i, perimeter, area*4);
	}
	fclose(fp);
	return 0;
}
