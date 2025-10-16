#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
  int findSmallestInteger( std::vector< int > & nums, int value ) {
    std::vector< int > nums_base_freq( value, 0 );
    auto               get_nums_base_freq = [&]( int a ) {
      int base          = a % value;
      int base_positive = ( base < 0 ) ? base + value : base;
      ++nums_base_freq[base_positive];
    };
    std::for_each( nums.begin(), nums.end(), get_nums_base_freq );
    auto it_min_el = std::min_element( nums_base_freq.begin(), nums_base_freq.end() );
    return std::distance( nums_base_freq.begin(), it_min_el ) + value * *it_min_el;
  }
};

int main() {
  Solution           s;
  std::vector< int > nums  = { 1, -10, 7, 13, 6, 8 };
  int                value = 5;
  std::cout << "smallest_integer: " << s.findSmallestInteger( nums, value ) << std::endl;
}
