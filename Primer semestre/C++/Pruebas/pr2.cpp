#include <iostream>

using namespace std;

int main() {
    int nums[] = {1,3,6,2,5};
    //Divide the size of the array (in bytes) by the size of a single element (in bytes)
    // to get the total number of elements in the array.
    int numsSize = sizeof(nums)/sizeof(nums[0]); // Get size of the nums array
    
    cout << numsSize;

    /*for (int index=0; index<numsSize; index++) {
        cout << nums[index] << endl;*/
    }