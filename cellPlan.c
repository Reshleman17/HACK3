/*
 *Author: Ryan Eshleman
 *Date due: 9/5/18
 */

#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<float.h>
#include<math.h>

int main(int argc, char **argv) {

double GB, period,dailyAvg, usedAvg, remainTotal, daysRemain, daysUsed, recAvg, planGB, currentDay, usedGB;
  period = 30;

  printf("Please enter number if GB in your 30 day plan: \n");
  scanf("%lf", &planGB);

  printf("Please enter current day in your plan: \n");
  scanf("%lf", &currentDay);

  printf("Please enter total amount of GB used so far: \n");
  scanf("%lf", &usedGB);

  daysRemain = period - currentDay;
  daysUsed = currentDay; // just made this to keep track of it
  dailyAvg = planGB/period;
  usedAvg = usedGB/period;
  remainTotal = (daysRemain*usedAvg) - planGB;
  recAvg = (usedAvg*daysUsed) / remainTotal;


if (usedGB > planGB){
  printf("You are out of data!\n");}
else(usedGB == planGB){
  printf("You are at your data limit!\n");}
else(usedGB > planGB){
  if (dailyAvg < usedAvg) {
    printf("%lf days used, %lf days remaning. You are EXCEEDING your average daily use (%lf).
     Continuing this high usage, you'll exceed your data plan by %lf GB.
     In order to stay below, use no more than %lf GB/day\n", daysUsed, daysRemain, dailyAvg, remainTotal, recAvg);
  if (dailyAvg > usedAvg) {
    printf("%lf days used, %lf days remaning. You are BELOW your average daily use (%lf).
     Continuing this usage, you'll below your data plan by %lf GB.
     In order to stay below, use no more than %lf GB/day\n", daysUsed, daysRemain, dailyAvg, remainTotal, recAvg);
  if (dailyAvg == usedAvg) {
    printf("%lf days used, %lf days remaning. You are RIGHT AT your average daily use (%lf).
     Continuing this usage, you'll stay right with your data plan by %lf GB.
     In order to stay even, use no more than %lf GB/day\n", daysUsed, daysRemain, dailyAvg, remainTotal, recAvg);
  }}}}
  return 0
}
