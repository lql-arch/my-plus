// #include<stdio.h>
// #include<string.h>
// int string_in(char*str,char*ch){
//     int str_length = strlen(str);
//     int ch_length = strlen(ch);
//     int m = 0;
//     int n = 0;
//     for (int i = 0; i < str_length; i++)
//     {
//         n = i;
//         m = 0;
//         while (str[n] == ch[m])
//         {
//             n++;
//             m++;
//             if (m >= ch_length)
//             {
//                 return i;
//             }
//         }
//     }
// }
// int main(){
//     char str[256];
//     char ch[256];
 
//     printf("Enter the string:");
//     gets(str);
 
//     printf("Enter the string you want to find:");
//     gets(ch);
 
//     int p=string_in(str,ch);

//     printf("%c:%d\n",str[p],p);
    
//     return 0;

// }