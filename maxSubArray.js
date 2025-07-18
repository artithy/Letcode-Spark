var maxSubArray = function (nums) {

    var currentSum = 0;
    var maxSum = Number.NEGATIVE_INFINITY;
    var n = nums.length;

    for (var i = 0; i < n; i++) {
        if (currentSum < nums[i]) {
            currentSum = nums[i];
        } else {
            currentSum = nums[i] + currentSum;
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}