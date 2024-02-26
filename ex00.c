#include <unistd.h>

void ft_putchar(char c) {
    write (1, "hello" , 3);
}

int main (){
    char character = 'A';
    ft_putchar( character );
    return 0;
}