$include <stdio.h>
/**
 * main - print the sizes
 *
 * Description: using the main function
 * prints the sizes of different types
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;
	printf("Size of a char: %ld byte(s)/n", sizeof(c));
	printf("Size of an int: %ld byte(s)/n", sizeof(i));
	printf("Size of a long int: %ld byte(s)/n", sizeof(l));
	printf("Size of a long long int: %ld byte(s)/n", sizeof(ll);
	printf("Size of a float: %ld byte(s)/n", sizeof(f));
	return (0);
}
