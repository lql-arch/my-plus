// #include<stdio.h>
// #include<string.h>
// void get(char word[],int size);

// int main(){
//     char word[20];
//     memset(word,0,sizeof(word));

//     get(word,sizeof(word));

//     printf("%s\n",word);
// }

// void get(char word[],int size){
//     char ch[1000];
//     int i=0,j=0;
//     memset(ch,0,sizeof(ch));

//     scanf("%s",&ch);
//     while(ch[i]==' '){
//         i++;
//     }
//     for(i,j=0;ch[i]!=' '&&i<size;i++,j++){
//         word[j]=ch[i];
//     }
//     word[j]='\0';
// }


// #include <ctype.h>  //isblank||isempty
// void get_input2(char *input)
// {
//     char ch = 0;
//     int i = 0;
//     printf("Enter the word:");
//     do
//     {
//         ch = getchar();
//         if (!isblank(ch))
//         {
//             break;
//         }
//     } while (1);
 
//     input[i++] = ch;
//     do
//     {
//         ch = getchar();
//         if (isblank(ch))
//         {
//             break;
//         }
//         input[i++] = ch;
//     } while (1);
 
//     input[i] = '\0';
 
//     return;
// }
// int  main()
// {
//     char input[256];
 
//     get_input2(input);
 
//     printf("The word you entered is %s\n", input);
 
//     return 0;
// }