// #include<stdio.h>
// int main(){
//     double salary=0;
//     int time=0;
//     double taxes=0;
//     double salp=10;
//     int num=0;

//     do{
//         printf("*********************************************\n");
//         printf("1) $8.75/hr\t\t\t2) $9.33/hr\n");
//         printf("3) $10.00/hr\t\t\t4) $11.20/hr\n");
//         printf("5) quit\n");
//         printf("*********************************************\n");
//         scanf("%d",&num);
//         switch (num){
//             case 1:
//                 salp=8.75;
//                 break;
//             case 2:
//                 salp=9.33;
//                 break;
//             case 3:
//                 salp=10.00;
//                 break;
//             case 4:
//                 salp=11.20;
//                 break;
//             case 5:
//                 return 0;
//             default:
//                 printf("请输入正确选项：\n");
//                 continue;

//         }

//         printf("请输入工作时间:");
//         scanf("%d",&time);
//         if(time>40){
//             salary=40*salp+(time-40)*1.5*salp;
//         }else{
//             salary=time*salp;
//         }

//         if(salary<=300){
//             taxes=salary*0.15;
//         }else if(salary<=450){
//             taxes=300*0.15+(salary-300)*0.2;
//         }else{
//             taxes=300*0.15+150*0/2+(salary-450)*0.25;
//         }

//         printf("工资为：%.2f,税金为:%.2f,净收入:%.2f\n",salary,taxes,(salary-taxes));
//     }while(1);
//     return 0;
// }