// int function() {
//   int a = 2;
//   return a;
// }

// int main() {
//   int b = function(); // returned value is copied to b, and a is freed
//   return 0;
// }


// warning(not an error): reference to stack memory associated with local variable 'a' returned
// int& function() {
//   int a = 2;
//   return a; // return the reference of a, but actual a is freed right after this line
// }           // we call it 'Dangling Reference'

// int main() {
//   int b = function();
//   b = 3;
//   return 0;
// }

int& function(int& a) {
  a = 5;
  return a;
}

int main() {
  int b = 2;
  int c = function(b);
  return 0;
}

// Advantage of returning reference: Do not have to copy all the objects. Only addresses




// int function() {
//   int a = 5;
//   return a;
// }

// int main() {
//   int& c = function(); // similarly c becomes a dangling reference
//   return 0;
// }

// int main() {
//   const int& c = function(); // but this works becuase of const
//   std::cout << "c : " << c << std::endl;
//   return 0;
// }