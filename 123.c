// #include<stdio.h>
// //#include"pe12-3a.c"

// int set_mode(int n)
// {
//     int mode=0;
//     if (n > 1)
//     {
//         printf("Invalid mode specified. Mode %s used.\n",(0 == mode) ? "0(metric)" : "1(US)");
//     }
//     else
//     {
//         mode = n;
//     }
//     return mode;
// }

// void get_info(int mode,double*range,double*fuel)
// {
    
//     if (0 == mode)
//     {
//         printf("Enter distance traveled in kilometers: ");
//     }
//     else
//     {
//         printf("Enter distance traveled in miles: ");
//     }
//     scanf("%lf", range);

//     if (0 == mode)
//     {
//         printf("Enter fuel consumed in liters: ");
//     }
//     else
//     {
//         printf("Enter fuel consumed in gallons: ");
//     }
//     scanf("%lf", fuel);

//     return;
// }

// void show_info(int mode,double*range,double*fuel)
// {
//     if (0 == mode)
//     {
//         printf("Fuel consumption is %.2lf liters per 100km.\n",(*fuel / *range) * 100);
//     }

//     else
//     {
//         printf("Fuel consumption is %.1lf miles per gallon.\n",*range / *fuel);
//     }
//     return;
// }

// int main(){
//     int mode;
//     double fuel=0;
//     double range=0;

//     printf("Enter 0 for metric mode,1 for US mode :");
//     scanf("%d",&mode);
//     while(mode>=0){
//         mode=set_mode(mode);
//         get_info(mode,&range,&fuel);
//         show_info(mode,&range,&fuel);
//         printf("Enter 0 for metric mode,1 for US mode");
//         printf("(-1 to quit):");
//         scanf("%d",&mode);
//     }
//     printf("Done.\n");
//     return 0;
// }