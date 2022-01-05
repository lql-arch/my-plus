// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<ctype.h>
// #define LEN 40

// int main(int argc,char*argv[]){
//     FILE *fp;
//     char ch;
//     char filename[LEN];
    
//     printf("please enter file name:");
//     scanf("%s",filename);
//     if((fp=fopen(filename,"r+"))==NULL)
//     {
//         printf("Error");
//         exit(EXIT_FAILURE);
//     }

//     while((ch=getc(fp))!=EOF){
//         fseek(fp,-1L,SEEK_CUR);
//         putc(toupper(ch),fp);
//         fseek(fp,0L,SEEK_CUR);
//     }

//     fseek(fp,0L,SEEK_END);
//     long num=ftell(fp);
//     rewind(fp);
//     char*p;
//     p=(char*)malloc(sizeof(char)*(num+1));
//     memset(p,0,num+1);
//     fread(p,num+1,1,fp);
//     printf("%s",p);
//     if(p!=NULL){
//         free(p);
//         p=NULL;
//     }
//     fclose(fp);

//     return 0;
// }

// #include <stdio.h>
// #include <ctype.h>
// #include <stdlib.h>
// #define LEN 50

// int main(int argc, char *argv[])
// {
//     int ch;
//     FILE *fp;
//     char filename[LEN];

//     printf("Please enter a filename: ");
//     scanf("%49s", filename);

//     if ((fp = fopen(filename, "r+")) == NULL)
//     {
//         fprintf(stderr, "Can't open %s\n", filename);
//         exit(EXIT_FAILURE);
//     }
//     while ((ch = getc(fp)) != EOF)
//     {
//         fseek(fp, -1L, SEEK_CUR); //回退一个字节;
//         putc(toupper(ch), fp);
//         fseek(fp, 0L, SEEK_CUR); //改变文件状态,使得下一个字符可以被正常读取(详情参见C陷阱与缺陷一书);
//     }
//     rewind(fp);
//     printf("File %s:\n", filename);
//     while ((ch = getc(fp)) != EOF)
//     {
//         putchar(ch);
//         /*↑显示到屏幕上检测
//         字符是否成功转换为大写;*/
//     }
//     putchar('\n');
//     if (fclose(fp) != 0)
//     {
//         fprintf(stderr, "Can't close %s\n", filename);
//     }

//     return 0;
// }
