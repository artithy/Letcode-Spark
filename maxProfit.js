var maxProfit = function (prices) {
    if (prices.length < 2) return 0;

    let buyStockPrice = prices[0];
    let profit = 0;

    for (let i = 1; i < prices.length; i++) {
        let p = prices[i] - buyStockPrice;

        if (p > profit) {
            profit = p;
        }

        if (buyStockPrice > prices[i]) {
            buyStockPrice = prices[i]
        }
    }

    return profit
};