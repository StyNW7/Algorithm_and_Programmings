#include <stdio.h>

int main(){
	int size;
	scanf ("%d", &size);
	bool flag = false;
	for (int i = 0; i < size; i++){
		int temp;
		scanf ("%d", &temp);
		if (temp == 1) flag = true;
	}
	
	if (flag) printf ("not easy\n");
	else printf ("easy\n");
	
	return 0;
}
