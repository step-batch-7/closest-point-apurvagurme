#include <stdio.h>
#include <math.h>
#include "point.h"

int distance (Point a, Point b)
{
  return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  int minimum_distance = distance(current_location, food_points[0]);
  *closest_food_location = food_points[0];

  for(int index = 1; index < points_length; index++)
  {
    int current_distance = distance(current_location, food_points[index]);
    if(minimum_distance > current_distance)
    {
      minimum_distance = current_distance;
      *closest_food_location = food_points[index];
    }
  }
}