/*
 *Author: Ryan Eshleman and Christopher Reid
 *Date due: 9/5/18
 */

 #include<stdlib.h>
 #include<stdio.h>
 #include<limits.h>
 #include<float.h>
 #include<math.h>

 int main(int argc, char **argv) {

 double GB, period,dailyAvg, usedAvg, daysRemain, daysUsed, planGB, currentDay, usedGB;
 float remainTotal, recAvg;

   period = 30;

   printf("Please enter number of GB in your 30 day plan: \n");
   scanf("%lf", &planGB);

   printf("Please enter current day in your plan: \n");
   scanf("%lf", &currentDay);

   printf("Please enter total amount of GB used so far: \n");
   scanf("%lf", &usedGB);

   daysRemain = period - currentDay;
   daysUsed = currentDay; // just made this to keep track of it
   dailyAvg = planGB / period;
   usedAvg = usedGB / period;
   remainTotal = (daysRemain * usedAvg) - planGB;
   recAvg = (usedAvg * daysUsed) / remainTotal;


 if (usedGB > planGB){
   printf("You are out of data!\n");}
 else if(usedGB == planGB);{
   printf("You are at your data limit!\n");}
  if(usedGB > planGB){
 }else(dailyAvg < usedAvg);{
     printf("%d Days used, %d days remaning. You are EXCEEDING your average daily use %d. Continuing this high usage, you will exceed your data plan by %d GB. In order to stay below, use no more than %d GB/day \n");
     }
 if(dailyAvg > usedAvg);{
     printf("%d used, %d days remaning. You are BELOW your average daily use %d. Continuing this usage, you will below your data plan by %d GB. In order to stay below, use no more than %d GB/day\n");}
      if(dailyAvg == usedAvg); {
     printf("%d Days used, %d days remaning. You are RIGHT AT your average daily use %d. Continuing this usage, you will stay right with your data plan by %d GB. In order to stay even, use no more than %d GB/day\n");}

 return 0;
 }
