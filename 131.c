// #include<stdio.h>
// #include<stdlib.h>
// #define LEN 40
// int main(int argc,char*argv[]){
//     signed long long count;
//     FILE *fp;
//     char ch;
//     char filename[LEN];

//     printf("Please enter filename:");
//     scanf("%49s",&filename);
//     if((fp=fopen(filename,"r")) == NULL){
//         printf("Can't open %s\n",filename);
//         exit(EXIT_FAILURE);
//     }
//     while((ch=getc(fp)) != EOF)
//     {
//         putc(ch,stdout);
//         count++;
//     }
//     fclose(fp);
//     printf("\nFile %s has %llu characters\n",filename,count);

//     return 0;
// }
