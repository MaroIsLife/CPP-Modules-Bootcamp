#include <iostream>
#include <string>

// int main(int ac, char **av)
// {
//     std::string filename;
//     std::string s1;
//     std::string s2;

//     std::string test = "1234Maro56";

//     if (ac != 4)
//     {
//         std::cout << "Please insert 3 arguments\n";
//         exit(0);
//     }
//     filename = av[1];
//     s1 = av[2];
//     s2 = av[3];

//     std::cout << test.find("Maro") << "\n";
//     // std::cout << "Filename: " + filename + "\n";
    
// }
int main ()
{
  std::string str ("There are two needles in this haystack with needles.");
  std::string str2 ("needle");

  // different member versions of find in the same order as above:
  std::size_t found = str.find(str2);
  if (found != std::string::npos)
    std::cout << "first 'needle' found at: " << found << '\n';

  found=str.find("needles are small",found+1,6);
  if (found!=std::string::npos)
    std::cout << "second 'needle' found at: " << found << '\n';

  found=str.find("haystack");
  if (found!=std::string::npos)
    std::cout << "'haystack' also found at: " << found << '\n';

  found=str.find('.');
  if (found!=std::string::npos)
    std::cout << "Period found at: " << found << '\n';


  // let's replace the first needle:
//   str.replace(str.find(str2),str2.length(),"preposition");
    str.insert(5," Maro");
    str.erase(0,6);
  std::cout << str << '\n';
  return 0;
}