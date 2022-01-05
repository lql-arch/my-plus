// #include<stdio.h>
// #include<math.h>
// unsigned int rotate(unsigned int x,int n){
//     unsigned int m=0;
//     int num=0;
//     int arr[32];
//     m=x>>n;
//     for(unsigned int i=x;i>0;i/=2){
//         num++;
//     }
//     num-=n;
//     for(int i=0;i<n;i++){
//         arr[i]=x&1;
//         x>>=1;
//         m+=arr[i]*pow(2,num);
//     }
//     return m;
// }   

// int main(){
//     unsigned int x=0;
//     int n=0;
//     scanf("%u %d",&x,&n);
//     unsigned int num=rotate(x,n);
//     printf("%u\n",num);
// }