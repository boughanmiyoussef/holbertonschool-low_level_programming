






Write a function that draws a straight line in the terminal.

Prototype: void print_line(int n);
You can only use _putchar function to print
Where n is the number of times the character _ should be printed
The line should end with a \n
If n is 0 or less, the function should only print \n

#include "main.h"
/**
 * print_line - entry point
 * Description: prints a straight line in the terminal 
 * @n: the size of the line
 * Return: void
*/
void print_line(int n)
int a;
{
    if (n <= 0)
    {
        _putchar('\n');
    }else
    {
        for (a = 0 ; a < n ; a++)
        {
            _putchar('_');
        }  
        _putchar('\n');
    }
   
}











Write a function that draws a diagonal line on the terminal.

Prototype: void print_diagonal(int n);
You can only use _putchar function to print
Where n is the number of times the character \ should be printed
The diagonal should end with a \n
If n is 0 or less, the function should only print a \n

#include "main.h"
/**
 * print_diagonal - entry point
 * Description: prints a diagonal line
 * @n: number of lines
 * Return: void
*/
void print_diagonal(int n)
{
}


\
 \
  \




Write a function that prints a square, followed by a new line.
Prototype: void print_square(int size);
You can only use _putchar function to print
Where size is the size of the square
If size is 0 or less, the function should print only a new line
Use the character # to print the square


#include "main.h"
/**
 * print_square - entry point
 * Description: prints a square
 * @size: size of the square
 * Return: void
*/
void print_square(int size)

{

}









Write a function that prints a triangle, followed by a new line.

Prototype: void print_triangle(int size);
You can only use _putchar function to print
Where size is the size of the triangle
If size is 0 or less, the function should print only a new line
Use the character # to print the triangle


#include "main.h"
/**
 * print_triangle - entry point
 * Description: prints a triangle
 * @size: size of the triangle
 * Return: void
*/

void print_triangle(int size)
{
    int lines;
    int columns;
    if (size <= 0)
    {
        _putchar('\n');
    }else
    {
        for (lines = 0 ; lines < size; lines++)
        {
            for (columns = 1 ; columns <= size ; columns++)
            {
                if (columns < size - lines)
                {
                    _putchar(' ');
                }
                _putchar('#');
            }
            _putchar('\n');
        }
    }
    
}


.........#$   9 SPACE + 1 #           1 < 10-
........##$   8 columns
.......###$   7
......####$   6
.....#####$   5                                   
....######$   4
...#######$   3
..########$   2
.#########$   1
##########$   0 0 SPACE + 10 # 






                         columns < size - lines           (size - lines) hedhy te7seb space
.........#$  line 1       10 < 10 - 1 
........##$  line 2       10 < 10 - 2
.......###$  line 3       10 < 10 - 3 
......####$  line 4       10 < 10 - 4 
.....#####$  line 5       10 < 10 - 5                             
....######$  line 6       10 < 10 - 6
...#######$  line 7       10 < 10 - 7
..########$  line 8       10 < 10 - 8
.#########$  line 9       10 < 10 - 9
##########$  line 10      10 < 10 - 10        NO SPACE 

dima ten lines w ten columns howa fel 7a9i9a square

W ZID HNE LINES HOWA 9AD NUMBERS OF # 

N HNE HOWA LINES W COLUMNS 

w 3lech na7na nzidou columns mech lines kima alpahabet X 10 
5ater hedha tableau mouch string w ky yabda tableau n3amrouh case b case mouch string


line 1 col 1   line 1 col2  line1 col 3       col heya ly tetbadel 
line 2 col 1   line 2 col2  line2 col3        tawa line tbadel ba3d ma col kamlet loop
