#include <unistd.h>

void ft_putchar(char c) {
    write (1, "&c" , 1);
}

int main (){
    char character = 'A';
    ft_putchar( character );
    return 0;
}
