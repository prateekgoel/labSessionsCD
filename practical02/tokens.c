/*
 * tokens.c
 *
 *  Created on: Jul 9, 2014
 *      Author: jay
 */

#include<stdio.h>
#include<string.h>

int main()
{
	FILE* read;
	char ch;
	char arr[20];
	int i=0;
	int iden=0;
	int state=0; //0 : doing nothing 1:reading name 2:ended
	read = fopen("inputtokens.txt","r");
	fscanf(read,"%s",arr);
	for(i=0;i<strlen(arr);i++) {
		ch=arr[i];

		if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='=') {
			printf("<%c> operator\n",ch);
		} else {
			printf("<%c , %d> Identifier\n",ch,++iden);
		}
	}
	fclose(read);
	return 0;

}
