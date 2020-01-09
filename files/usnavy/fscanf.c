
#include <stdio.h>



int main()
{

	int a,b;
	FILE * stream = fopen("fprint1","r");
	if (stream){
		fscanf(stream,"%d %d",&a,&b);
	}
	printf("%d %d",a, b);
	fclose(stream);
	return 0;
}
