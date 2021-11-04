
#include<stdio.h>
#include<unistd.h>


void * memset(void * s, int c, size_t len)
{
	char *xs = s;

	while (len--)
		*xs++ = c;
	return s;
}


int main()
{
    char s[] = "salutlamif";
    int c = 42;
    
    /* memset(s, c, 3 * sizeof(char)); */
    memset(s, c, 3);
    printf("%s",s);
}
