// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(int argc,char*argv[]){
//     FILE *fp;
//     char ch;
//     int count;

//     for(int i=1;i<argc;i++){
//         if((fp=fopen(argv[i],"r"))==NULL){
//             printf("Error");
//             exit(EXIT_FAILURE);
//         }
//         while((ch=getc(fp))!=EOF){
//             putc(ch,stdout);
//         }
//         fclose(fp);
//         printf("\n\n");
//     }

//     return 0;
// }