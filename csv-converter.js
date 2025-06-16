let csv = "name,age,city\nTithy,20,Dhaka\nReza,22,Khulna";

let finalArray = [];

let lines = csv.split("\n");

for (let i = 0; i < lines.length; i++) {
    let items = lines[i].split(",");
    finalArray.push(items);
}

console.log(finalArray);
