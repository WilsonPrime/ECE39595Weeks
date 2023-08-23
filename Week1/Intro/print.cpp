#include <iostream> //C++ system header files typically do not have .h extension
#include <string>

//using namespace std; // Works but not recommended.

//More recommended approach 
using std::cout;
using std::cin;
using std::string;
using std::endl;

void PrintString(void){
  string s1 = "Hello ";
  string s2 = "World!";
  string firstName, lastName;
  string fullName;
  int length;

  cout << "Enter first name: ";
  cin >> firstName;

  cout << "Enter last name: ";
  cin >> lastName;

  fullName = firstName + ' ' + lastName;

  cout << s1 << s2 << ' ' << fullName << endl;
 
  length = firstName.size();

  cout << "Name has " << length << " characters" << endl;
  
}



int main(void){
  double n;    // floating-point variable
  int i;

  PrintString();

  // std refers to std namespace

  std::cout << "Enter  a float: "; // prompt for a number
  std::cin >> n;
  
  std::cout << "Enter an integer: "; // prompt for a number
  std::cin >> i;
  

  std::cout << " n == " << n
	    << "\n n+1 == " << n+1            
  	    << "\n half of n == " << n/2
	    << "\n i == " << i
	    << "\n i+1 == " << i+1            
	    << "\n half of i == " << i/2
	    << std::endl; //alternative to '\n';
}