# Problem-:// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

// Examples 1:  

// Input: arr[]   = {2, 0, 2}
// Output: 2

// Example 2:
// Input: arr[]   = {3, 0, 2, 0, 4}
// Output: 7  

int Solution::trap(const vector &A) {

int n = A.size();

int leftmax[n];

//int n = A.size();


leftmax[0] = A[0];
for(int i = 1; i<n; i++){
    leftmax[i] = max(leftmax[i-1], A[i]);
    
}

int rightmax[n];
rightmax[n-1] = A[n-1];
for(int i = n-2; i>=0; i--){
    rightmax[i] = max(rightmax[i+1], A[i]);
    
}

int water[n];

for(int i =0; i<n; i++){
    water[i] = min(leftmax[i], rightmax[i])-A[i];
}
 
 
int sum =0;
//vector<int> area;
for(int i =0; i<n; i++){
   sum+= water[i];
}

return sum;

}
