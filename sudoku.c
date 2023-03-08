int main(void){
    int **board;
    int i = 0;

    //allouer la mémoire du int ** -> 9lignes (9 int *)
    board = (int **)malloc(sizeof(int*) * 9);

    //loop *9 allouer la mémoire des int* -> (9 int)
    while (i < 9) {
        board[i] = (int*)malloc(sizeof(int) * 9);
        i++;
    }
}