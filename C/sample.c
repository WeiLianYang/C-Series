#include <stdio.h>
#include <float.h>

int main(int argc, char const *argv[])
{
	printf("float max size : %lu \n", sizeof(float));
	printf("float min value : %E \n", FLT_MIN);
	printf("float max value : %E \n", FLT_MAX);
	printf("float digital : %d \n", FLT_DIG);

	return 0;
}
