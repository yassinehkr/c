#include <stdio.h>
#include <stdlib.h>

int main(){
    // int count = 1;
    // int g;
    // int secretNumber = 7;
    
    // printf("Can You Guess A Number : \n");
    // while(count <= 3){
    //     scanf("%d",&g);
    //     if (g == secretNumber){
    //         printf("Congratulation You Won!");
    //            break ;
    //     }else printf("Try Again \n"); 
    //     count++;
        
    // }

    // if( g != secretNumber){
    //     printf("You lose !");
    // }

    // int s = 7;
    // int g;
    // int c;
   
    // while(s != g && c < 3){
    //     printf("Guess a number : \n ");
    //     scanf("%d",&g);
    //     c++;

    // }
    // if(s == g ){
    // printf("You Win!");
    // }else printf("You Lose!");
    int count = 0;
    int secret = 7;
    int guess ;
    int Nubofguess = 10;
    int outofguess = 0;
    
    while(guess != secret && outofguess == 0){
        if(count < Nubofguess){
        printf("Enter A Number : \n");
        scanf("%d", &guess);
        count++;
        }else outofguess = 1;
    }
    if(outofguess ==1 ){
        printf("You Lose !");

    }else printf("You Win !");

    
    return 0;
}