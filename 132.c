// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #define LEN 50

// int main(int argc,char*argv[]){
//     char ch;
//     char filename[LEN];
//     unsigned long count=0;
//     FILE *in,*out;

//     if(argc<3){
//         printf("error");
//         exit(EXIT_FAILURE);
//     }

//     strcpy(filename,argv[2]);

//     if((in=fopen(argv[1],"r"))==NULL){
//         printf("%s error",argv[1]);
//         exit(EXIT_FAILURE);
//     }

//     if((out=fopen(filename,"w+"))==NULL){
//         printf("%s error",filename);
//         exit(EXIT_FAILURE);
//     }

//     while((ch=getc(in))!=EOF){
//         putc(ch,out);
//         count++;
//     }
//     if(fclose(in)!=0 ||fclose(out)!=0){
//         printf("fclose error");
//         exit(EXIT_FAILURE);
//     }

//     printf("\nthere are %d char",count);
    
// }

