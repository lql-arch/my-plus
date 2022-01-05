// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// void _str(){
//     int word=0;
//     int len=0;
//     printf("How many words do you wish to enter?");
//     scanf("%d",&word);
//     char**word_str;
//     static char str[256];
//     word_str=(char**)malloc(sizeof(char*)*word);
//     if(word_str!=NULL){
//         printf("Enter %d words now:",word);
//         for(int i=0;i<word;i++){
//             scanf("%s",&str);
//             len=strlen(str)+1;
//             word_str[i]=(char*)malloc(sizeof(char)*len);
//             if(word_str[i]==NULL){
//                 printf("Abnormal exit");
//                 exit(1);
//             }
//             strcpy(word_str[i],str);
//         }
//         printf("Here are your words:\n");
//             for(int i=0;i<word;i++){
//             printf("%s\n",word_str[i]);
//             free(word_str[i]);
//             word_str[i]=NULL;
//         }
//         free(word_str);
//         word_str=NULL;
//     }

// }

// int main(){
//     _str();
//     return 0;
// }
