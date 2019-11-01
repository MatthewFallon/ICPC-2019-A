#include <iostream>
#include <vector>

using namespace std;

int main(__attribute__((unused)) int argc,__attribute__((unused)) char const *argv[]) {
  long length;
  cin >> length;
  std::vector< std::vector<int> > rows( 4, std::vector<int>(length) );
  for (int i=0; i<4; i++) {
    for (int j = 0; j < length; j++) {
      cin >> rows.at(i).at(j);
    }
  }
  for (auto row = rows.begin(); row != rows.end(); row++) {
    auto col = *row;
    std::cout << '\n';
    for (auto el = col.begin(); el != col.end(); el++) {
      std::cout << *el << ' ';
    }
  }
  return 0;
}
