#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp = fopen("testdata.in", "r");
	int tc;
	fscanf(fp, "%d\n", &tc);
	for(int i = 1; i <= tc; i++){
		int shift;
		fscanf(fp, "%d\n", &shift);
		char str[1001];
		memset(str, 0, sizeof(str));
		fscanf(fp, "%[^\n]\n", str);
		
		char alphaconv[] = {'O','I','E','A','S','G','T','B'};
		
		int len = strlen(str);
		for(int j = 0; j < len; j++){
			if(str[j] == ' '){
				continue;
			} 
			if(str[j] >= '0' && str[j] <= '8'){
				if(str[j]>='3'){
					str[j] = alphaconv[str[j] - '0'-1];
				}else{
					str[j] = alphaconv[str[j] - '0'];
				}
//                printf("%c\n", str[j]);
            }
			
			str[j] -= shift;
			if(str[j] < 'A'){
				str[j] = 'Z' - ('A' - str[j] - 1);
			}
		}
		printf("Case #%d: %s\n", i, str);
	}
	fclose(fp);
}
