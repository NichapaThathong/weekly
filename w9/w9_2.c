#include <stdio.h>
int r,c,i=0;
int go = 0;
char board[3][3] = {{'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}};
int o (){
    board [r][c] = 'o';
    printf("\n\n");
     printf("\t\t\t\t %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
     printf("\t\t\t\t---+---+---\n");
     printf("\t\t\t\t %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
     printf("\t\t\t\t---+---+---\n");
     printf("\t\t\t\t %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
}
int x (){
    board [r][c] = 'x';
    printf("\n\n");
     printf("\t\t\t\t %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
     printf("\t\t\t\t---+---+---\n");
     printf("\t\t\t\t %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
     printf("\t\t\t\t---+---+---\n");
     printf("\t\t\t\t %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
}
int chekO (){
    if(((board[0][0]==board[1][1])&&(board[1][1]==board[2][2]))||
    ((board[0][2]==board[1][1])&&(board[1][1]==board[2][0]))||
    ((board[0][0]==board[1][0])&&(board[1][0]==board[2][0]))||
    ((board[0][1]==board[1][1])&&(board[1][1]==board[2][1]))||
    ((board[0][2]==board[1][2])&&(board[1][2]==board[2][2]))||
    ((board[0][0]==board[0][1])&&(board[0][1]==board[0][2]))||
    ((board[1][0]==board[1][1])&&(board[1][1]==board[1][2]))||
    ((board[2][0]==board[2][1])&&(board[2][1]==board[2][2])))
    {
        printf("\n\t\tCongratulations, player 2, YOU ARE THE WINNER!\n");
        i=1;
    }
    else {}
    
}
int chekX (){
    if(((board[0][0]==board[1][1])&&(board[1][1]==board[2][2]))||
    ((board[0][2]==board[1][1])&&(board[1][1]==board[2][0]))||
    ((board[0][0]==board[1][0])&&(board[1][0]==board[2][0]))||
    ((board[0][1]==board[1][1])&&(board[1][1]==board[2][1]))||
    ((board[0][2]==board[1][2])&&(board[1][2]==board[2][2]))||
    ((board[0][0]==board[0][1])&&(board[0][1]==board[0][2]))||
    ((board[1][0]==board[1][1])&&(board[1][1]==board[1][2]))||
    ((board[2][0]==board[2][1])&&(board[2][1]==board[2][2])))
    {
        printf("\n\t\tCongratulations, player 1, YOU ARE THE WINNER!\n");
        i=1;
    }
    else {}

}
int main() {
    printf("\n\n");
    printf("\t\t\t\t 1 | 2 | 3\n");
    printf("\t\t\t\t---+---+---\n");
    printf("\t\t\t\t 4 | 5 | 6\n");
    printf("\t\t\t\t---+---+---\n");
    printf("\t\t\t\t 7 | 8 | 9\n");

    
    
    while (i<1){
    printf("\n\t\tPlayer 1, please enter the number [your] x:");
    scanf("%d",&go);
    //scanf("%d,%d",&r,&c);
    r = --go/3;
    c = go%3;
    x();
    chekX ();
    
    
    printf("\n\t\tPlayer 2, please enter the number [your] o:");
    scanf("%d",&go);
    //scanf("%d,%d",&r,&c);
    r = --go/3;
    c = go%3;
    o();
    chekO ();
    }
}
