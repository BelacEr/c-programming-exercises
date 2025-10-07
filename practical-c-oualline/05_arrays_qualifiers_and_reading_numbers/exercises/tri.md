Question 5-2 : Example 5-9 computes the area of a triangle, given the triangle's
width and height. For some strange reason, the compiler refuses to believe that we
declared the variable width. The declaration is right there on line 2, just after the
definition of height. Why isn't the compiler seeing it?

```c
#include <stdio.h>
char line[100];  /* line of input data */
int height;      /* the hight of the triangle
int width;      /* the width of the triangle */
int area;       /* area of the triangle (computed) */

int main(void)
{
    printf("Enter width height? ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &width, &height);

    area = (width * height) / 2;
    printf("The area is %d\n", area);
    return (0);
}
```
The error occurred because we forgot to close the comment on line 2. In order to fix the code, we need to close it. 

```c
#include <stdio.h>
char line[100];  /* line of input data */
int height;      /* the hight of the triangle*/
int width;      /* the width of the triangle */
int area;       /* area of the triangle (computed) */

int main(void)
{
    printf("Enter width height? ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &width, &height);

    area = (width * height) / 2;
    printf("The area is %d\n", area);
    return (0);
}
```