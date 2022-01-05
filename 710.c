// #include<stdio.h>
// #include <unistd.h>
// int main(){
//      double salary=0;
//     int type=0;
//     double taxe_type=0;
//     double taxe=0;
    
//     do{
//         printf("*********************************************\n");
//         printf("1) 单身\t\t\t\t2) 户主\n");
//         printf("3) 已婚（共有)\t\t\t4) 已婚（离异)\n");
//         printf("5) quit\n");
//         printf("*********************************************\n");
//         scanf("%d",&type);
//         switch (type){
//             case 1:
//                 taxe_type=17850;
//                 break;
//             case 2:
//                 taxe_type=23900;
//                 break;
//             case 3:
//                 taxe_type=29750;
//                 break;
//             case 4:
//                 taxe_type=14875;
//                 break;
//             default:
//                 return 0;
//         }
//         printf("请输入收入：");
//         scanf("%lf",&salary);
//         if(salary<=taxe_type){
//             taxe=salary*0.15;
//         }else{
//             taxe=(salary-taxe_type)*0.28+taxe_type*0.15;
//         }
//         printf("税金是%.2f\n",taxe);
//         sleep(2);
//     }while(1);
// }