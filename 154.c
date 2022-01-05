// #include<stdio.h>
// int bron(int num,int w){
//     int arr[32];
//     for(int i=0;i<32;i++){
//         arr[i]=num&1;
//         num>>=1;
//     }
//     if(arr[w-1]==1){
//         return 1;
//     }else{
//         return 0;
//     }
// }

// int main(){
//     int n,m;
//     scanf("%d %d",&n,&m);
//     int num=bron(n,m);
//     printf("%d\n",num);

//     return 0;
// }