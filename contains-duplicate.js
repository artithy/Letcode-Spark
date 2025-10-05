var containsDuplicate = function (nums) {
    var n = nums.length;
    nums.sort((a, b) => a - b);
    for (var i = 0; i < n; i++) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
};