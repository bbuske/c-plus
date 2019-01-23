#include <iostram>

int main() {
  int number = 5;                        //  Creating a variable of type int and initialize it with a value of 5. 
  float decimal = 2.0;                   //  Creating a variable of type float and assign it the value of 2.0 
  double dnumber = 2.15;                 //  Creating a variable of type double and initialize it with the value of 2.15
  bool truth = true;                     //  Creating a variable of the boolean type and assign it the value of true. 
  char letter = 'A';                     //  Creating a variable of type char and assign it the letter A. 
  w_char twoLetters= 'A';                //  Creating variable of type w_char and assign it the string AB. 
   
  std::cout << number << "\n";           // Print the variable named number on screen. 
  std::cout << decimal << "\n";          // Print variable named decimal on screen. 
  std::cout << dnumber << "\n";          // Print variable named dnumber on screen.
  std::cout << truth << "\n";            // Print value of variable named truth on screen. 
  std::cout << letter << "\n";           // Print value of variable named char on screen. 
  std::cout << twoLetters << "\n"        // Print value of variable named twoLetters on screen. 
  
  double results = decimal * dnumber;    // Multiplicating decimal with dnumber and assign the result to the variable result. 
  double addition = decimal + dnumber;   // Adding decimal with dnumber and assign the result to a variable named addition.
  double division = decimal / dnumber;   // Division of decimal with dnumber. Result will be assigned to the variable division. 
  double substract = decimal - dnumber;  // Substraction of dnumber from decimal. The result will be assigned to substract. 
  double modulo = decimal % dnumber;     // Obtain the remainder of the division of decimal with number and assign it to modulo. 
  
  std::cout << results << "\n";           // Print the variable named number on screen. 
  std::cout << addition << "\n";          // Print variable named decimal on screen. 
  std::cout << division << "\n";          // Print variable named dnumber on screen.
  std::cout << substract << "\n";         // Print value of variable named truth on screen. 
  std::cout << modulo << "\n";            // Print value of variable named char on screen.  
  
  return 0;                               // If the program executes without error, 0 will be returned. This step is optional. 
 }
