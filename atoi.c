void gd_putnbr(int nb){

}

void gd_putchar(char c){
    write(1 , &c, 1);
}

int gd_atoi(char *str){

}

int main(void){
    int nb = gd_atoi("-500");
    gd_putnbr(nb);
    gd_putchar('\n');
    
}