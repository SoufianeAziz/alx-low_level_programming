#include <stdio.h>
/**
 *main - main entry point 
 *return : always 0 (success)
 */
int main(void)
{
	printf("size of char: %d byte(s)", sizeof(char));
	printf("size of int: %d byte(s)", sizeof(int));
	printf("size of long int: %d byte(s)", sizeof(long int));
	printf("size of long long int: %d byte(s)", sizeof(long long int));
	printf("size of float: %d byte(s)", sizeof(float));
	return (0);
}
