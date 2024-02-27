#include <unistd.h>
#include <stdio.h>

void ft_print_comb (void) {
    for (char i = '0' ; i<= '9' ; i++){
        for (char e = '1' ; e <= '9'; e++){
            if (i == e) {
                continue ;
            }
            for (char a = '2' ; a <= '9' ; a++) {
                if (a == e || i == a ) {
                    continue;
                }
                write (1,&i,1);
                write (1,&e,1);
                write (1,&a,1);
                write (1,&",",1);
                }
            }
        
        }
        
    }
    
int main () {
    ft_print_comb ();
}