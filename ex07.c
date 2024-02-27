#include <unistd.h>

void ft_putnbr (int nb) {

    int number = nb ;

    if (number < 0) {
        write (1,"-",1);
        number = -number ;
    }

    if (number == 0) {
        char z = '0';
        z = number + '0';
        write (1,&z,1);
    }

    int many = 0 ;
    int nbr = number ;
    while (nbr > 0) {
        nbr /= 10;
        many++;
    }

    char arrnum [many] ;
    for (int i = many-1 ; i >= 0; i--) {
        int dnum = number% 10  ;
        arrnum [i] = dnum + '0';
        number /= 10 ;
    }
    write (1,&arrnum,many);
}

int main () {
    int num = 42 ;
    ft_putnbr (num);
}