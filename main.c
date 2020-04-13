#include <stdio.h>
#include "point.h"

int main(void)
{
  struct Point closest_food_location;
  struct Point food_points[5] = { {18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38} };
  struct Point current_location = {10, 94};
  int points_length = sizeof(food_points) / sizeof(struct Point);
  
  get_closest_food(food_points, points_length, current_location, &closest_food_location);

  printf("Location of organism: {%d,%d}\n", current_location.x, current_location.y);
  printf("Closest food target: {%d,%d}\n", closest_food_location.x, closest_food_location.y);
  return 0;
}