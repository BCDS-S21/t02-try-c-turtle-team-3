 /* File:   main_CTurtle.cpp
 * Original Author:  Jesse W. Walker with modifications by Jan Pearce, 2019
 * Modified by: FIXME
 */

#include "CTurtle.hpp";   //This brings in the CTurtle library for use
namespace ct = cturtle;  //This makes it possible to use the CTurtle commands using ct::
#include <iostream> //for input & output
using namespace std; //this makes it possible to use cin and cout without std::

int main() {
	ct::TurtleScreen scr;

	scr.bgcolor({ "white" });
	ct::Turtle turtle(scr);

	turtle.speed(ct::TS_FASTEST);
	turtle.fillcolor({ "purple" });
	turtle.begin_fill();
	
  for (float i = 0; i < 70; i++) {
        turtle.forward(2);
        turtle.right(5);
        turtle.forward(2); 
        }
  
  //for (float i = 0; i < 50; i++) {
        //turtle.forward(3);
        //turtle.right(2);
  
  //for (float i = 0; i < 2; i++) {
        //turtle.forward(1);
        //turtle.right(2);
        //turtle.forward(1); }

  //for (float i = 0; i < 1; i++) {
      //turtle.forward(1);
      //turtle.right(1);


    turtle.end_fill();

	scr.exitonclick();  //exists graphics screen
	return 0;
}
