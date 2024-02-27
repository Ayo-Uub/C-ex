#include <unistd.h>

void ft_print_comb2(void) {

    for (char a = '0' ; a <= '9' ; a++) {
        for (char e = '0' ; e <= '9' ; e++){
            for (char i = '0' ; i <= '9' ; i++) {
                for (char o = '0' ; o <= '9' ; o++) {
                    if (a < i || a == i && e < o) {
                        write (1,&a,1);
                        write (1,&e,1);
                        write (1,"  ",2);
                        write (1,&i,1);
                        write (1,&o,1);
                        write (1,",",1);
                    }
                    
                }
            }
        }
    }
}

int main () {
    ft_print_comb2 ();
}