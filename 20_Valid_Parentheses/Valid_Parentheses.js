/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
  const stack = [];

  for (let i = 0; i < s.length; i++) {
    const c = s[i];

    if (c === "(" || c === "{" || c === "[") stack.push(c);
    else {
      if (stack.length === 0) return false;
      const top = stack[stack.length - 1];
      if (
        (c === ")" && top !== "(") ||
        (c === "}" && top !== "{") ||
        (c === "]" && top !== "[")
      )
        return false;
      stack.pop();
    }
  }

  return stack.length === 0;
};
