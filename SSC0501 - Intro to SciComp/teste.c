#include <stdio.h>

int main() {
 int x= 0, *pi;
 pi = &x;
    printf("&x: %p pi: = %p", &x, &pi);

    return 0;
}