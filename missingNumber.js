var missingNumber = function (nums) {
    var n = nums.length;
    var expectedSum = n * (n + 1) / 2;
    var actualSum = 0;
    for (var i = 0; i < n; i++) {

        actualSum = actualSum + nums[i];
    }

    return expectedSum - actualSum;
};