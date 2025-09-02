#include <iostream>
#include <string>
#include "tagger.h"
#include <limits>
int main() {
    tagged(); // it's just ascii art like shit ton of lines i don't want making this unreadable 
    bool loop = true;
    while (loop) { // this is the looping stuff
        char x;
        int woopies = 0; //this is meant to be here so it don't reset to 0 in the loop below :3 FUCK YOU Clion
// THIS is the OP input loop
        bool ERROROP = false;
        while (!ERROROP) {
            std::cout << "Press + - * / for what you wanna do..." << std::endl;
            std::cin >> x;  // x is input
            std::cout<< std::endl;
            bool add = (x == '+');
            bool sub = (x == '-');
            bool mutil = (x == '*');
            bool div = (x == '/');
            if (add || sub || mutil || div) {
                ERROROP = true;
            }else {
                std::cout << "MISINPUT DUMMY DO IT AGAIN...." << std::endl; // error loop lol
                woopies += 1;
                if (woopies >= 3 ) {
                    std::cout <<"woopies"<<system("sleep 0.5")<<std::endl;
                    return 1;
                }
            }
        }
        double A;
        double B;
        //the input for A and B
	    while(true){
             std::cout <<"Type the first set of numbers..."<<std::endl;
             std::cin >> A;
	     if (std::cin.fail()){ // the error thinga mc bobber
	       std::cin.clear();
	       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	       std::cout<<"HEY YOU PUT A INVALID CHARACTER!!!! "<<std::endl;
	       continue;
	     } 
             std::cout <<std::endl;
             std::cout << "Type the second set of numbers..."<<std::endl;
             std::cin >> B;
	     if (std::cin.fail()){ // the error thinga mc bobber mk2
               std::cin.clear();
	       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	      
	       std::cout<<"HEY YOU PUT A INVALID CHARACTER!!!! "<<std::endl;  
	       continue;
	     }else{
	       break; 
	      }
	    } 
            std::cout <<std::endl;
        // the mathing parts / dont listen to the "errors" they dont understand FUCK YOU CLION
        if (x == '+') {
            bool nineplusten = false;
            if (A == 9 || B == 10) {
                std::cout << "what 9 + 10 uhhhhh..... 21!!"<<std::endl;
                nineplusten = true;
            }
            if (!nineplusten){  std::cout <<"The Answer Is "<< A + B<< std::endl;
            }
        }
        else if (x == '-') {
            std::cout <<"The Answer Is " << A - B  << std::endl;
        }
        else if (x == '*') {
            std::cout <<"The Answer Is " << A * B  << std::endl;
        }
        else if (x == '/') {
            std::cout <<"The Answer Is " << A / B  << std::endl;
        }else {
            return 1;
        }
        std::cout <<std::endl<< "PRESS ANYKEY TO CLEAR OR q TO QUIT "<<std::endl;
        char z;
        std::cin >> z;
	if (z == 'q'){
	  loop = false; 
	}  
    }
}//this is so cooked
