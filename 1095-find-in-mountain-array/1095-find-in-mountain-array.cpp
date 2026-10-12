/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int left = 0;
        int right = n-1;
        int peak = -1;
        while(right>left) {
            int mid = left + (right-left)/2;
            int s = mountainArr.get(mid);
            int r = mountainArr.get(mid+1);
            if(s<r) {
                left = mid + 1;
            }
            else if(s>r) {
                right = mid;
            }
        }
        peak = left;
        if(mountainArr.get(peak) == target) return peak;
        left = 0;
        right = peak;
        while(left <= right) {
            int mid = left + (right - left)/2;
            int s = mountainArr.get(mid);
            if(s == target) return mid;
            if(s > target) {
                right = mid -1;
            }
            else {
                left = mid + 1;
            }
        }
        left = peak;
        right = n - 1;
        while(left <= right) {
            int mid = left + (right - left)/2;
            int s = mountainArr.get(mid);
            if(s == target) return mid;
            if(s > target) {
                left = mid + 1;
            }
            else {
                right = mid -1;
            }
        }
        return -1;
    }
};