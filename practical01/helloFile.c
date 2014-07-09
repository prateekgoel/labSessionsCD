#include<stdio.h>

void nowRead();

int main() {
	FILE* m;
	m=fopen("myfile.txt","w+");

	fprintf(m,"a=b+c;");

	fclose(m);

	nowRead();

	return 0;
}

void nowRead() {
	FILE* read;
	read = fopen("myfile.txt","r");
	char m[20];
	fscanf(read,"%s",m);
	printf("The text read is : %s" , m);
	return;
}
