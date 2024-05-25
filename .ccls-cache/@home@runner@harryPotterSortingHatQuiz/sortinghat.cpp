#include <iostream>

int main()
{
  //creates variables to store answers
  int q1;
  int q2;
  int q3;
  int q4;
  int total;
  
  //Provide user insrtuctions
  std::cout << "Enter your answers to the questions below with one of the numbers listed to each answer. \n";

  //Questions user
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
  std::cout << "1. The Good\n";
  std::cout << "2. The Great\n";
  std::cout << "3. The Wise\n";
  std::cout << "4. The Bold\n";
  std::cin >> q1;
  
  std::cout << "Q2) Dawn or Dusk?\n";
  std::cout << "1. Dawn\n";
  std::cout << "2. Dusk\n";
  std::cin >> q2;

  std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
  std::cout << "1. The violin\n";
  std::cout << "2. The trumpet\n";
  std::cout << "3. The Piano\n";
  std::cout << "4. The drum\n";
  std::cin >> q3;

  std::cout << "Q4) Which road tempts you most:\n";
  std::cout << "1. The wide, sunny grassy lane\n";
  std::cout << "2. The narrow, dark, lantern-lit alley\n";
  std::cout << "3. The twisting, leaf-strewn path through woods\n";
  std::cout << "4. The cobbled street lined (ancient buildings)\n";
  std::cin >> q4;

  total = q1 + q2 + q3 + q4;

  if (total < 5)
    {
      std::cout << "Huffelpuff!\n";
    }
  else if (total < 8)
    {
      std::cout << "Griffindoor!\n";
    }
  else if (total < 11)
    {
      std::cout << "Ravenclaw!\n";
    }
  else
    {
      std::cout << "Slitheren!\n";
    }
  
}