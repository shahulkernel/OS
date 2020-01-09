
#include <stdio.h>



int main()
{

	FILE * stream = fopen("fprint1","w+");

	if (stream){
		fprintf(stream," %d %d",10, 20);
	}

	fclose(stream);
	return 0;
}
