// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>
// int main(){
//     time_t t;
//     srand((unsigned)(&t));

//     int num[100];
//     int arr[10];
//     memset(arr,0,sizeof(arr));
//     for(int i=0;i<100;i++){
//         num[i]=rand()%10;
//     }

//     for(int i=0;i<100;i++){
//         switch(num[i]){
//             case 0:
//                 arr[0]++;
//                 break;
//             case 1:
//                 arr[1]++;
//                 break;
//             case 2:
//                 arr[2]++;
//                 break;
//             case 3:
//                 arr[3]++;
//                 break;
//             case 4:
//                 arr[4]++;
//                 break;
//             case 5:
//                 arr[5]++;
//                 break;
//             case 6:
//                 arr[6]++;
//                 break;
//             case 7:
//                 arr[7]++;
//                 break;
//             case 8:
//                 arr[8]++;
//                 break;
//             case 9:
//                 arr[9]++;
//                 break;    
//         }
//     }
//     for(int i=0;i<10;i++){
//         printf("%d:%d\n",i,arr[i]);
//     }
//     return 0;
// }