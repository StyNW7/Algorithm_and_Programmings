#include <stdio.h>
#include <string.h>
int main(){
	char a[100][100];
	int c,d,b,i=0;
	
	do{
		scanf("%s",a[i]);
		i++;
	}while(getchar() != '\n');
	
	scanf("%d",&c);
	scanf("%d",&b);
	
	for(int i = 0 ; i < b ; i++){
		printf("%s ",a[c]);
	}
	
	return 0;
}
