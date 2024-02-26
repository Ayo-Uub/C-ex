#include <unistd.h>

void ft_is_negative (int n) {

    char sign = (n < 0)? 'N' : 'P';;

    write (1, &sign , 1 );
    write (1, &"\n" , 1);
}

int main () {

    int num1 = -12;
    int num2 = 58;
    ft_is_negative (num1);
    ft_is_negative (num2);

}