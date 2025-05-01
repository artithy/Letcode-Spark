var majorityElement = function (nums) {

    const n = nums.length;
    for (var i = 0; i < n; i++) {
        let count = 0;
        for (var j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > Math.floor(n / 2)) {
            return nums[i];
        }
    }
};