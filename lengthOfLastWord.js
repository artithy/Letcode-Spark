var lengthOfLastWord = function (s) {
    let array = s.split(" ");
    array = s.trim().split(" ").filter(word => word.length > 0);

    let last = array.length - 1;
    return (array[last].length);
};