#include <stdio.h>

int numWaterBottles(int numBottles, int numExchange) 
{
    int totalDrunk = numBottles;
    int emptyBottles = numBottles;
    while (emptyBottles >= numExchange) 
    {
        int newBottles = emptyBottles / numExchange;
        totalDrunk += newBottles;
        emptyBottles = newBottles + (emptyBottles % numExchange);
    }
    return (totalDrunk);
}
