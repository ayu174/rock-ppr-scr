#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int player,computer;
int menu()
{
    int ch;
    printf("\n Please choose rock ,paper,scissors or quit:\n");
    scanf("%d",&ch);
    return(ch);
}
int generaterandomnumber(int n){
    srand(time(NULL));
    return rand()%n;

}
void logic(){
    switch(player)
    {
    case 1:
        if(computer==1){
            printf("You chose: Rock\n Computer chose: Rock");
            printf("\n its a draw");
            }
            else if(computer==2)
            {
                printf("\n You chose: Rock\n Computer chose: Paper");
                printf("\n Result : Computer won");
            }
            else{
                printf("\n You chose :Rock\n Computer chose :Scissors");
                printf("\n Result :  You won");
            }
            break;
    case 2:
        if(computer==1)
        {
            printf("\n You chose: Paper\n Computer chose: Rock");
            printf("\n Result : You won");
        }
        else if(computer==2)
        {
            printf("\n You chose: Paper\n Computer chose: Paper");
            printf("\n its a draw");
        }
        else{
            printf("\n You chose: Paper\n Computer chose: Scissors");
            printf("\n Result : Computer won");
        }
        break ;
    case 3:
        if(computer==1)
        {
            printf("\n You chose: Scissors\n Computer chose: Rock");
            printf("\n Result : Computer won");
        }
        else if(computer ==2)
        {
            printf("\n You chose: Scissors\n Computer chose: Paper");
            printf("\n Result : You won");
        }
        else
        {
            printf("\n You chose: Scissors\n Computer chose: Scissors");
            printf("\n its a draw");
        }
        break;
    case 4:
    exit(0);

    }
}
int main(){
    while(1){
computer=generaterandomnumber(4);
player=menu();
logic();}
return 0;
}
