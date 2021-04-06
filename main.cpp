 /* File:   main_CTurtle.cpp
 * Original Author:  Jesse W. Walker with modifications by Jan Pearce, 2019
 * Modified by: FIXME
 */

#include "CTurtle.hpp";   //This brings in the CTurtle library for use
namespace ct = cturtle;  //This makes it possible to use the CTurtle commands using ct::
#include <iostream> //for input & output
using namespace std; //this makes it possible to use cin and cout without std::
#include <string>

int main() {
	ct::TurtleScreen scr;

  string yname;

  cout << "What is your name?" << endl; 
  
  cin >> yname;

  cout << "Hello," << yname;

	scr.bgcolor({ "white" });
	ct::Turtle turtle(scr);

	turtle.speed(ct::TS_FASTEST);
  
  scr.tracer(0);

	turtle.fillcolor({ "yellow" });
	turtle.begin_fill();
	
  // middle of flower
  turtle.penup();
  turtle.goTo(-30, 50);
  turtle.pendown();
  for (float i = 0; i < 360; i++) {
        turtle.forward(1);
        turtle.right(1); }
  turtle.end_fill();

 // loop for petals
  
  turtle.penup();
  turtle.goTo(-50,100);

  for (float i = 0; i < 300; i++) { 
        
        turtle.fillcolor({ "pink" });
        turtle.begin_fill();

        for (float i = 0; i < 180; i++) {
        turtle.pendown();
        
        turtle.forward(1);
        turtle.right(2); } 
        turtle.end_fill();

        turtle.penup();
        turtle.forward(40);
        turtle.right(20);
        }

  turtle.hideturtle();

  turtle.goTo(100, 50);

  turtle.pendown();
  turtle.fillcolor({"black"});
  turtle.begin_fill();
  turtle.write("Aren't you glad it's spring, " + yname + "!");
  turtle.end_fill();

  //for (float i = 0; i < 2; i++) {
        //turtle.forward(1);
        //turtle.right(2);
        //turtle.forward(1); }

  //for (float i = 0; i < 1; i++) {
      //turtle.forward(1);
      //turtle.right(1);

      
    //for (int i = 0;i < 7; i++){ 
      //int z = 0 // int k = 100
      //turtle.goTo(z,k)
      //for (float i = 0; i < 180; i++) {
        //turtle.forward(1);
        //turtle.right(2); }}


    //turtle.end_fill();
  
	scr.exitonclick();  //exists graphics screen
	return 0;
}
