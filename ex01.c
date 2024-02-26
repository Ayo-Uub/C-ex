#include <unistd.h>

void ft_print_alphabet(void) {
    char alphabet = 'a';

    do {write (1,&alphabet,1);;
        alphabet ++ ;
    }
    while (alphabet <= 'z');

}

int main (){
    ft_print_alphabet ();
    return 0 ;
}