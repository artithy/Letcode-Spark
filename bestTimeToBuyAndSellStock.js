var maxProfit = function (price) {
    var minPrice = price[0];
    var maxProfit = 0;
    var n = price.length;

    for (var i = 0; i < n; i++) {
        if (minPrice > price[i]) {
            minPrice = price[i];
        } else {
            var profit = price[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    if (maxProfit > 0) {
        return maxProfit;
    } else {
        return 0;
    }
}
