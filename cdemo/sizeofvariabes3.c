#include <stdio.h>
int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;
    unsigned int i = 10;
    long unsigned int j = 156;
    // Sizeof operator is used to evaluate the size of a variable
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("Size of char: %ld byte\n",sizeof(charType));
    printf("Size of unsignedInt: %ld byte\n",sizeof(i));
    printf("Size of longunsignedInt: %ld byte\n",sizeof(j));
    return 0;
}
