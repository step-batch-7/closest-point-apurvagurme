/* 
You are a single celled organism whose location is represented in two dimensions.
You have several food targets around you, whose locations are also represented in two dimensions.

Write a program, which when given the above data can determine the food target closest to the single celled organism.
Assuming that there are five food targets at:
  [18 76] [19 66] [89 57] [9 71] [55 38]
*/
struct Point
{
  int x;
  int y;
} ;

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location);
