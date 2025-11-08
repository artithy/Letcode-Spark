var plusOne = function (digits) {
    var n = digits.length - 1;
    for (i = n; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i] = digits[i] + 1;
            return digits;
        }
    }
};