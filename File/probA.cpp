#include <stdio.h>
#include <string.h>

typedef struct{
	char pname[41];
	char name[41];
}tree;

tree arr[110];

char *search(char *str, int n){
	for(int i = 0; i < n; i++){
		if(strcmp(str, arr[i].name) == 0){
			return arr[i].pname;
		}
	}
	return "N/A";
}

int main(){
	FILE *fp = fopen("testdata.in", "r");
	if(fp == NULL){
		return 0;
	}
	
	int n = 0;
	fscanf(fp, "%d\n", &n);
	
	for(int i = 0; i < n; ++i){
		fscanf(fp, "%[^#]#%[^\n]\n", arr[i].name, arr[i].pname);
	}
	
	int tc;
	fscanf(fp, "%d\n", &tc);
	
	for(int i = 1; i <= tc; i++){
		char target[120];
		fscanf(fp, "%[^\n]\n", target);
		char *result = search(target, n);
		printf("Case #%d: %s\n", i, result);
	}
	return 0;
}
