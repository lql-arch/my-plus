// #include<stdlib.h>
// #include<stdio.h>
// #define Max 5

// double find_max(double num[]){
//     double max=num[0];
//     double min=num[0];
//     double sum=0;
//     for(int i=1;i<Max;i++){
//         if(max<num[i]){
//             max=num[i];
//         }
//         if(min>num[i]){
//             min=num[i];
//         }
//     }
//     sum=max-min;
//     return sum;
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
//     double sum=find_max(num);
//     printf("max=%lf\n",sum);
// }