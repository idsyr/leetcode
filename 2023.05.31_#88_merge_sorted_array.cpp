class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m+n-1, n1 = m-1, n2 = n-1;
        while(n1>=0&&n2>=0)
            if(nums1[n1]>nums2[n2])
                 nums1[end--] = nums1[n1--];
            else nums1[end--] = nums2[n2--];
        while(n1>=0) nums1[end--] = nums1[n1--];
        while(n2>=0) nums1[end--] = nums2[n2--];
    }
};

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int i = 0; i<n; i++){
//             nums1[m+i]=nums2[i];
//         }
//         sort(nums1.begin(), nums1.end());
//     }
// };

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int> result; result.resize(m+n);
//         int m1 = m; int n1 = n; int i = 0;
//         while(m!=0&&n!=0){
//             if(nums1[m1-m]<nums2[n1-n]){
//                 result[i] = (nums1[m1-m]); m--; i++;
//             } else {
//                 result[i] = (nums2[n1-n]); n--; i++;
//             }
//         }
//         while(m!=0) {result[i] = (nums1[m1-m]); m--; i++;}
//         while(n!=0) {result[i] = (nums2[n1-n]); n--; i++;}
//         nums1 = std::move(result);
//     }
// };
