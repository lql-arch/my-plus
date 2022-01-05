// #include <stdio.h>
// char*Find(char str[],char ch[]){
//     int str_length = strlen(str);
//     int ch_length = strlen(ch);
//     int m = 0;
//     int n = 0;
//     int flag=-1;
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
//                 flag=i;
//                 break;
//             }
//         }
//         if(flag!=-1){
//             break;
//         }
//     }
//     static char a[256];
//     int i=0;
//     while(flag<n){
//         a[i++]=str[flag++];
//     }
//     printf("%s\n",a);
//     return a;
// }

// int main()
// {
//     char string[256];
//     char chr[256];
//     char*index;
 
//     printf("Enter the string:");
//     gets(string);
 
//     printf("Enter the string you want to find:");
//     gets(chr);
 
//     index = Find(string, chr);

//     printf("%s\n",index);
    
// }

 


// int strchr1(char *string, char *chr)
// {
//     int string_length = strlen(string);
//     int chr_length = strlen(chr);
//     int m = 0;
//     int n = 0;
 
//     for (int i = 0; i < string_length; i++)
//     {
//         n = i;
//         m = 0;
//         while (string[n] == chr[m])
//         {
//             n++;
//             m++;
//             if (m >= chr_length)
//             {
//                 return i;
//             }
//         }
//     }
//     return -1;
// }
// int main()
// {
//     char string[256];
//     char chr[256];
//     int loc = 0;
 
//     printf("Enter the string:");
//     gets_s(string, 256);
 
//     printf("Enter the string you want to find:");
//     gets_s(chr, 256);
 
//     loc = strchr1(string, chr);
 
//     if (-1 == loc)
//     {
//         printf("%s doesn't appear in %s\n", chr, string);
//     }
//     else
//     {
//         printf("For %s, it is staring from %d character in %s\n", chr, loc, string);
//     }
 
//     return 0;
// }