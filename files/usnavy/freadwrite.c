

#include<stdio.h>


int main(){

	char data[1024];
	FILE * str1 = fopen("read","r");
	FILE * str2 = fopen("write","w+");
	
	fread(data,250,1,str1);
	fwrite(data,250,1,str2);


	fclose(str1);
	fclose(str2);

	return 0;
}
