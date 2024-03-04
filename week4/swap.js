x = 3;
y = 5;
console.log(x, y)
swap(x, y);
console.log(x, y)

function swap(x, y) {
    tmp = x;
    x = y;
    y = tmp;
}

