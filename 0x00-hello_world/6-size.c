#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always o (success)
*/
int main(void)
{
	printf("size of an char: %lu byte(s)/n", sizeof(char));
	printf("size of an int: %lu byte(s)/n", sizeof(int));
	printf("size of an long int: %lu byte(s)/n", sizeof(long int));
	printf("size of an long long int: %lu byte(s)/n", sizeof(long long int));
	printf("size of an float: %lu byte(s)/n", sizeof(float));
	return (0);
}
