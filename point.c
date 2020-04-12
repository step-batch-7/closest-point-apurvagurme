#include <stdio.h>
#include <math.h>
#include "point.h"

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location)
{
  int distance;
  double previous_distance = -INFINITY;

  for(int index = 0; index < points_length; index++)
  {
    int diff_of_x = (current_location.x - food_points[index].x);
    int diff_of_y = (current_location.y - food_points[index].y);    
    int square_of_diff_of_x = pow(diff_of_x, 2);
    int square_of_diff_of_y = pow(diff_of_y, 2);
    distance = sqrt(square_of_diff_of_x + square_of_diff_of_y);
    if(previous_distance > distance){
      previous_distance = distance;
      closest_food_location->x = food_points[index].x;
      closest_food_location->y = food_points[index].y;
    }
  }
}