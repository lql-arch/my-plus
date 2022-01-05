// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<time.h>
// // #include"diceroll.h"
// // #include"diceroll.c"

// int main(){
//     int status;
//     int sides,dice;
//     int sets;

//     srand((unsigned)time(0));
//     printf("Enter the number of sets;Enter q to stop : ");
//     while(scanf("%d",&sets)==1 && sets>0)
//     {
//         getchar();
//         //printf("How many dice?\n");
//         printf("How many sides and how many dice?");
//         if((status = scanf("%d %d",&sides,&dice)) != 2){
//             if(status==EOF)
//                 break;
//             else{
//                 printf("You should have entered an integer.");
//                 printf("Let's begin again.\n");
//                 while(getchar()!='\n')
//                     continue;
//                 printf("How many sides?Enter q to quit.\n");
//                 continue;
//             }
//         }
//         int roll[sets];
//         //roll=roll_n_dice(dice,sides);
//         for(int i=0;i<sets;i++){
//             roll[i]=rand()%(dice*sides)+1;
//         }

//         printf("Here are %d sets of %d %d-sides dice.\n",sets,dice,sides);
//         for(int i=0;i<sets;i++){
//             printf("%d ",roll[i]);
//             if((i+1)%15==0){
//                 printf("\n");
//             }
//         }
//         printf("\n");

//         printf("How many sides ? Enter q to stop.\n");

//     }
// //    printf("The rollem() function was called %d times.\n",roll_count);

//     printf("GOOD FORTUNE TO YOU!\n");

//     return 0;
// }