class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // int n1 = nums1.size();
        // int n2 = nums2.size();
        // vector<int>nums3;
        // int i=0,j=0;
        // while(i<n1 && j<n2){
        //     if(nums1[i]<nums2[j]){
        //         nums3.push_back(nums1[i++]);
        //     }else{
        //         nums3.push_back(nums2[j++]);
        //     }
        // }
        // while(i<n1){
        //     nums3.push_back(nums1[i++]);
        // }
        // while(j<n2){
        //     nums3.push_back(nums2[j++]);
        // }
        // int n = nums3.size();
        // if(n%2==0){
        //     return (nums3[n / 2] + nums3[n / 2 - 1]) / 2.0;
        // }else{
        //     return nums3[n/2];
        // }
        int i=0;
        int j=0;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1 + n2;
        int ind2 = n/2;
        int ind1 = ind2 -1;
        int count = 0;
        int indel1 = -1;
        int indel2 = -1;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                if(count == ind1){
                    indel1 = nums1[i];     
                }
                if(count == ind2){
                    indel2 = nums1[i];
                }
                count++;
                i++;
            }else{
                if(count == ind1){
                    indel1 = nums2[j];     
                }
                if(count == ind2){
                    indel2 = nums2[j];
                }
                count++;
                j++;
            }
        }
         while(i < n1) {
            if(count == ind1) indel1 = nums1[i];
             if(count == ind2) indel2 = nums1[i];
            count++;
            i++;
        }
         while(j < n2) {
            if(count == ind1) indel1 = nums2[j];
             if(count == ind2) indel2 = nums2[j];
            count++;
            j++;
        }
        if(n%2==0){
            return (indel2 + indel1) / 2.0;
        }else{
            return indel2;
        }
    }
};