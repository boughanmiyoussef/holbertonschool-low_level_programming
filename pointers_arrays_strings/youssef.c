// Write a function that fills memory with a constant byte.

// Prototype: char *_memset(char *s, char b, unsigned int n);
// The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
// Returns a pointer to the memory area s
































// Write a function that copies memory area.

// Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
// The _memcpy() function copies n bytes from memory area src to memory area dest
// Returns a pointer to dest






































// Write a function that locates a character in a string.

// Prototype: char *_strchr(char *s, char c);
// Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found

























// Write a function that gets the length of a prefix substring.

// Prototype: unsigned int _strspn(char *s, char *accept);
// Returns the number of bytes in the initial segment of s which consist only of bytes from accept

































// Write a function that searches a string for any of a set of bytes.

// Prototype: char *_strpbrk(char *s, char *accept);
// The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
// Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found

char *_strpbrk(char *s, char *accept)
{
    int i;
    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if(*s == accept[i])
            return (s);
        }
        s++
    }
    return(NULL);
}
















// Write a function that locates a substring.

// Prototype: char *_strstr(char *haystack, char *needle);
// The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
// Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.  

char *_strstr(char *haystack, char *needle)
{
    int i;
    if (*needle = 0)
    return (haystack)

    while (*haystack)
    {
        int i = 0;
        if (haystack)
    }


}







// Write a function that prints the chessboard.

void print_chessboard(char (*a)[8])
{
    int i;
    int j;
    i = j = 0;
    while (i < 8)
    {
        j = 0;
        while (j < 8)
        {
            _putchar(a[i][j]);
            j++;
        }
        _putchar('\n');
        i++;
    }

}
    


   

























































// Write a function that prints the sum of the two diagonals of a square matrix of integers.

// Prototype: void print_diagsums(int *a, int size);
// Format: see example
// You are allowed to use the standard library
// Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.



void print_diagsums(int *a, int size)
{
    int i, sumx; sumy;
    sumx = sumy = 0;
    for (i = 0; i < (size * size); i += size +1)
    sumx += a[i];
    for (i = size - 1; i< (size * size - 1); i += size - 1)
    sumy += a[i];
    printf("%d, %d\n" , sumx , sumy)
}

 

































// Write a function that sets the value of a pointer to a char.

// Prototype: void set_string(char **s, char *to);


