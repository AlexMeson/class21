#include <stdio.h>

int main(){

	FILE *fp = fopen("main.c","wb");
	
	fclose(fp);

	return 0;
}
