var thirdMax = function (nums) {
    nums.sort((a, b) => b - a);

    let newArray = [];
    for (var i = 0; i < nums.length; i++) {
        let found = false;
        for (let j = 0; j < newArray.length; j++) {
            if (nums[i] === newArray[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            newArray[newArray.length] = nums[i];
        }
    }

    if (newArray.length >= 3) {
        return newArray[2];
    } else {
        return newArray[0];
    }
};