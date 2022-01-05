// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(int argc,char*argv[]){
//     FILE *fa,*fs;
//     char ch1,ch2;

//     if((fa=fopen(argv[1],"r+"))==NULL){
//         fprintf(stderr," %s open error",argv[1]);
//         exit(EXIT_FAILURE);
//     }
//     if((fs=fopen(argv[2],"r+"))==NULL){
//         fprintf(stderr,"%s open error",argv[2]);
//         exit(EXIT_FAILURE);
//     }


//     while((ch1=getc(fa))!=EOF || (ch2=getc(fs))!=EOF){
//         while (ch1 != EOF && ch1 != '\n')
//         {
//             putchar(ch1);
//             ch1 = getc(fa);
//         }
//         // if (ch1 != EOF)
//         // {
//             putchar('\n');
//             ch1 = getc(fa); //光标读取至文件1的下一行;
//        // }
//         while (ch2 != EOF && ch2 != '\n')
//         {
//             putchar(ch2);
//             ch2 = getc(fs);
//         }
//         // if (ch2 != EOF)
//         // {
//             putchar('\n');
//             ch2 = getc(fs); //光标读取至文件2的下一行;
//         //}
//     }


//     fclose(fa);
//     fclose(fs);
//     return 0;
// }