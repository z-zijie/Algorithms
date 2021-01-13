#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  std::vector<int> v;
  for (int i = 0; i < n; i++)
    v.push_back(i);

  std::random_device rd;
  std::mt19937 g(rd());

  std::shuffle(v.begin(), v.end(), g);

  freopen("test.txt", "w", stdout);
  std::cout << n << "\n";
  std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << "\n";
  return 0;
}
