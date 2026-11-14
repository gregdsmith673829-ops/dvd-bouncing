#include "raylib.h"
#include <cstdlib>
#include <iostream>
using namespace std;
Texture2D  dvd;

int main(void)
{
InitWindow(500,500,"ball sim");
SetTargetFPS(60);
// long list of vars
float gravity = 25;
int x = 250, y = 250;
int id = 0;
float speedY = 4.5, speedX = 5.4;
Color green = {20,160,133,255};
Vector2 ballPosition = { -100.0f, -100.0f };
int e = -1;
dvd = LoadTexture("dvd.png");

// loop
while (WindowShouldClose() == false)
{
// event handling 




ballPosition = GetMousePosition();

//drawing
BeginDrawing();
ClearBackground(green);
y += speedY;
x += speedX;

if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){

DrawCircleV(ballPosition,25,DARKBLUE);

id++;
}
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
