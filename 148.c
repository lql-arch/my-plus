// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int kong=12;
// typedef struct Node{
//     char number;
//     int state;
//     char name[15];
//     char xing[15];
// }node;

// void empty_list(node*piao,int kong);
// void list(node*piao);
// void assign_list(node*piao);
// void delete_list(node*piao);

// int main(){
//     node piao[12];
//     for(int i=0;i<12;i++){
//         piao[i].number='a'+i;
//         piao[i].state=0;
//     }
//     while(1){
//         char ch;
//         printf("To choose a function, enter its letter label:\n");
//         printf("a) Show number of empty seats\n");
//         printf("b) Show list of empty seats\n");
//         printf("c) Show alphabetical list of seats\n");
//         printf("d) Assign a customer to a seat assignment\n");
//         printf("e) Delete a seat assignment\n");
//         printf("f)Quit\n");

//         scanf("%c",&ch);
//         switch (ch)
//         {
//         case 'a':
//             printf("%d\n",kong);
//             break;
//         case 'b':
//             empty_list(piao,kong);
//             break;
//         case 'c':
//             list(piao);
//             break;
//         case 'd':
//             assign_list(piao);
//             break;
//         case 'e':
//             if(kong<12){
//                 delete_list(piao);
//             }
//             else{
//                 printf("目前尚无人入座\n");
//             } 
//             break;
//         case 'f':
//         printf("Thank your useness.\n");
//             return 0;
//             break;
//         default:
//             printf("please Re-enter:\n");
//             break;
//         }
//         getchar();
//         printf("Enter \"enter\",for continue.\n");
//         getchar();
//     }
//     return 0;
// }

// void empty_list(node*piao,int kong){
//     printf("Empty seats:%d\n",kong);
//     if(kong>=1)
//         printf("--------------------------\n");
//     for(int i=0;i<12;i++){        
//         if(piao[i].state!=1){
//             printf("座位编码：%c\n",piao[i].number);
//             printf("座位状态：空\n"); 
//             printf("--------------------------\n");
//         }
//     }
//     return ; 
// }

// void list(node*piao){
//         printf("--------------------------\n");
//     for(int i=0;i<12;i++){       
//         printf("座位编码：%c\n",piao[i].number);
//         if(piao[i].state==0)
//             printf("座位状态：空\n"); 
//         else 
//             printf("座位状态：已被占据\n");
//         if(piao[i].state!=0)
//             printf("座位人姓名：%s %s\n",piao[i].xing,piao[i].name);
//         printf("--------------------------\n");
//     }
//     return ; 
// }

// void assign_list(node*piao){
//     for(int i=0;i<12;i++){
//         if(piao[i].state==0){
//             printf("请输入你的姓和名（用空格分开）：\n");
//             printf("如果想要退出，请输入\"#\"\n");
//             scanf("%s",&piao[i].xing);
//             if(strcmp(piao[i].xing,"#")==0 ){
//                 return ;
//             }
//             scanf("%s",&piao[i].name);
//             if(strcmp(piao[i].name,"#")==0){
//                 return ;
//             }
//             piao[i].state=1;
//             kong--;
//         }
//     }
//     return ;
// }

// void delete_list(node*piao){
//     char x[15],m[15];
//     int flag=0;
//     printf("请输入你的姓和名（用空格分开）：\n");
//     printf("退出请按\"#\"\n");
//     scanf("%s",&x);
//     if(strcmp(x,"#")==0){
//         return ;
//     }
//     scanf("%s",&m);
//     if(strcmp(m,"#")==0){
//         return ;
//     }
//     for(int i=0;i<12;i++)
//     {   
//         flag=1;
//         if(strcmp(piao[i].xing,x)==0&&strcmp(piao[i].name,m)==0)
//         {
//             piao[i].state=0;
//             strcpy(piao[i].xing,NULL);
//             strcpy(piao[i].name,NULL);
//             kong++;
//         }
//     }
//     if(flag==0){
//         printf("查无此人\n");
//     }
//     return ;
// }



