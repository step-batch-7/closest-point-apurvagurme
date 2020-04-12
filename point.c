#include <stdio.h>
#include <math.h>
#include "point.h"

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location)
{
  int distance;
  int previous_distance;
  for(int index = 0; index < points_length; index++)
  {
    int square_of_diff_of_x = pow((current_location.x - food_points[index].x),2);
    int square_of_diff_of_y = pow((current_location.y - food_points[index].y),2);
    distance = sqrt(square_of_diff_of_x - square_of_diff_of_y);
    
    if(previous_distance > distance){
      previous_distance = distance;
      closest_food_location->x = food_points[index].x;
      closest_food_location->y = food_points[index].y;
    }
  }
}