var countSegments = function (s) {
    var arrayNew = s.split(" ");
    let count = 0;
    for (var i = 0; i < arrayNew.length; i++) {
        if (arrayNew[i] != "") {
            count++;
        }
    }

    return count;
};