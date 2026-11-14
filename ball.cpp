#include "raylib.h"
#include <cstdlib>
#include <iostream>
using namespace std;
Texture2D  dvd;

int main(void)
{
InitWindow(500,500,"ball sim");
SetTargetFPS(60);
//list of vars

int x = 250, y = 250;

float speedY = 4.5, speedX = 5.4;
Color green = {20,160,133,255};

dvd = LoadTexture("dvd.png");

// loop
while (WindowShouldClose() == false)
{
// event handling 






//drawing
BeginDrawing();
ClearBackground(green);
y += speedY;
x += speedX;


DrawTexture(dvd, y, x, WHITE);

if (y > 450) speedY = -speedY ;
if (y < 0) speedY = -speedY;
if (x > 450) speedX = -speedX;
if (x < 0) speedX= -speedX;



EndDrawing();




}


UnloadTexture(dvd);

CloseWindow();


return 0;
}
