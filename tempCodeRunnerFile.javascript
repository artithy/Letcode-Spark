function isValid(s) {
    let stack = [];
    for (var i = 0; i < s.length; i++) {
        var char = s[i];
        if (char == '(' || char == '{' || char == '[') {
            stack.push(char);
        } else {
            if(stack.length ==0){
                return false;
            }


            let last = stack.pop()
            if (
                (char = ')' && last = '(') || (char = '}' && last = '{') || (char = ']' && last = '[')
            ) {
                continue;
            } else {
                return false;

            }
        }
    }

    return stack.length == 0;
}
console.log(isValid("()"))
console.log(isValid("({)}"))