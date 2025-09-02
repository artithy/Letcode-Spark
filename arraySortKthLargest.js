var findKthLargest = function (nums, k) {
    var n = nums.length;
    for (var i = 0; i < n; i++) {
        let min = i;
        for (let j = i + 1; j < n; j++) {
            if (nums[j] < nums[min]) {
                min = j;
            }
        }
        var temp = nums[i];
        nums[i] = nums[min];
        nums[min] = temp;
    }

    var index = n - k;
    var largest = nums[index];
    return largest;
};