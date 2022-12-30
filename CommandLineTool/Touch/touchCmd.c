#include <stdio.h>

int main() {
	char fileName[256];
	gets(fileName);

	FILE *fp;
	fp = fopen(fileName, "w");
	fclose(fp);

	return 0;
}
