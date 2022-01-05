// #include<stdio.h>
// #include<string.h>
// int is_within(char ch,char*str){
//     int len=strlen(str);
//     for(int i=0;i<len;i++){
//         if(str[i]==ch){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main()
// {
//     char str[256];
//     char ch;
 
//     printf("Enter the string:");
//     gets(str);
 
//     printf("Enter the string you want to find:");
//     scanf("%c",&ch);
 
//     int p=is_within(ch,str);

//     if(p){
//         printf("%s中存在%c\n",str,ch);
//     }else{
//         printf("%s中不存在%c\n",str,ch);
//     }
    
//     return 0;
// }