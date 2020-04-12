#include <stdio.h>
#include "point.h"

int main(void)
{
  struct Point food_points[5] = { {18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38} };
  struct Point current_location = {2, 3};
  struct Point closest_food_location;
  int points_length = sizeof(food_points) / 8;
  
  get_closest_food(food_points, points_length, current_location, &closest_food_location);

  printf("Closest food target : [%d %d]", closest_food_location.x, closest_food_location.y);
  return 0;
}