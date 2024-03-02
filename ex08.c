#include <unistd.h>

void ft_print_combn (int n ) {
  
    char c[n];
    for(int i = 0 ; i < n  ; i++) {
        c[i] =  i +'0';
    }
    write (1,&c,n);
    write (1,",",1);
    int v = n -1 ;

    while (v >= 0 )
    {
        if (c [v] < (10-n + v)+ '0') {
            c[v] = c[v]+1 ;

            for (int i = v+1 ; i < n ; i++){
                c[i] = c[i-1] +1 ;
            }
            write (1,&c,n);
            write (1,",",1);

            v=n-1;
        }
        else v-- ;
    }
}
    
int main (){
    int number = 4;
    ft_print_combn(number);
}