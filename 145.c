// #include<stdio.h>
// #include<stdlib.h>
// #define CSIZE 4
// struct name{
//         char m[10];
//         char x[10];
// };
// struct student{
//     struct name mes;
//     double grade[3];
//     double aver;
// };

// int main(){
//     struct student s[CSIZE];
//     double allAver=0;

//     for(int i=0;i<CSIZE;i++)
//     {   
//         double t=0;
//         printf("please enter surname and name:");
//         scanf("%s %s",&s[i].mes.m,&s[i].mes.x);
//         for(int j=0;j<3;j++){
//             printf("plese enter %d grade of %s.%s:",j,s[i].mes.m,s[i].mes.x);
//             scanf("%lf",&s[i].grade[j]);
//             t+=s[i].grade[j];
//         }
//         s[i].aver=t/3;
//         allAver+=s[i].aver;
//     }
//     allAver=allAver/CSIZE;

//     //打印
// }