var reverse = function (x) {
    var rev = 0;
    var sign = x < 0 ? -1 : 1;
    if (x < 0) { x = -x }
    while (x != 0) {
        var digit = x % 10;
        if (rev > (2147483647 - digit) / 10) { return 0; }
        rev = rev * 10 + digit;
        x = x / 10 | 0;
    }
    return rev * sign;
};