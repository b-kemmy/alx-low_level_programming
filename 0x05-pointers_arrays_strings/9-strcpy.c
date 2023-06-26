#include "stdio.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to the dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char* _strcpy(char* dest, const char* src);

int main()
{
	char src[] = "Hello World!";
	char dest[20];
	_strcpy(dest, src);
	printf("Copied string: %s\n", dest);
	return 0;
}

char* _strcpy(char* dest, const char* src)
{
	char* dest_ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return dest_ptr;
}
