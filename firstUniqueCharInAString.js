var firstUniqChar = function (s) {
    const freq = {};

    for (let i = 0; i < s.length; i++) {
        const char = s[i];
        freq[char] = (freq[char] || 0) + 1;
    }

    for (let i = 0; i < s.length; i++) {
        if (freq[s[i]] === 1) {
            return i;
        }
    }

    return -1;
};