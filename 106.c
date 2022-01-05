// #include<stdlib.h>
// #include<stdio.h>
// #define Max 5

// void find_max(double num[],int numSize){
//     double temp=0;
//     for(int i=0;i<numSize/2;i++){
//         temp=num[i];
//         num[i]=num[numSize-1-i];
//         num[numSize-1-i]=temp;
//     }
// }

// int main(){
//     double num[Max];

//     for(int i=0;i<Max;i++){
//         scanf("%lf",&num[i]);
//     }

//     for(int i=0;i<Max;i++){
//         printf("%lf ",num[i]);
//     }
//     printf("\n");
//     find_max(num,Max);
//     for(int i=0;i<Max;i++){
//         printf("%lf ",num[i]);
//     }
//     printf("\n");
// }