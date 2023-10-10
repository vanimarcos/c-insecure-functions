#include <stdio.h>
#include <limits.h>
int main()
{
    // printf("Testing malicios input\n");
    // insecure_print("%s%s%s%s%s%s%s");

    int a = INT_MAX;
    int b = INT_MAX;
    printf(addNumbers(a, b));

    return 0;
}

// insecure printf function
void insecure_print(char *malicios_input)
{
    printf(malicios_input);
}

//Integer-overflow security
int addNumbers (int a, int b) {
    return  a + b;
}


