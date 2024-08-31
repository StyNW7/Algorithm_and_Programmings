#include <stdio.h>
#include <string.h>

int main(){
	int T;
	FILE *fp = fopen("testdata.in", "r");
	fscanf(fp, "%d\n", &T);
	for(int i = 0; i < T; ++i){
		int changed[26]={0};
        int count[26]={0};
        char s[120];
        fscanf(fp,"%[^\n]\n",s);
        int change;
        fscanf(fp,"%d\n",&change);
        while(change--){
            char x,y;
            fscanf(fp,"%c %c\n",&x,&y);
            if(changed[x-'A'])continue;
            changed[x-'A']=1;
            for(int i=0;i<strlen(s);i++){
                 if(s[i]==x){
                    s[i]=y;
                 }
            }    
        }
        for(int i=0;i<strlen(s);i++){
            count[s[i]-'A']+=1;
        }
        for(int i=0;i<26;i++){
            if(count[i])printf("%c %d\n",i+'A',count[i]);
        }
	}
	fclose(fp);
	return 0;
}
