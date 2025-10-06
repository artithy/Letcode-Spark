var containsNearbyDuplicate = function (nums, k) {
    var n = nums.length;
    var set = new Set();
    for (var i = 0; i < n; i++) {
        if (set.has(nums[i])) {
            return true;
        }
        set.add(nums[i]);
        if (set.size > k) {
            set.delete(nums[i - k]);
        }
    }
    return false;
};