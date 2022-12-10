#include <iostream>
#include <vector>

using namespace std;
// Given an unsorted array of numbers and a target ‘key’,
// remove all instances of ‘key’ in-place and return
// the new length of the array.

// Note: I worked on the paper.
//       curPtr = {0.....arr.size()}
//       modPtr points to next written

class RemovekeyInstances {
public:
  static int removeKeyInst(vector<int> &arr, int key) {
    int modPtr = 0;
    for (int curPtr = 0; curPtr < arr.size(); curPtr++) {
      if(arr[curPtr] != key) {
        arr[modPtr] = arr[curPtr];
        modPtr++;
      }
    }
    return modPtr;
  }
};

int main() {
  std::cout << "Hello World!\n";
  vector<int> arry = {3, 2, 3, 6, 3, 10, 9, 3,8,9,};
  int key = 3;
  auto result = RemovekeyInstances::removeKeyInst(arry, key);
  cout << result << endl;
}