var isMatch = function (s, p) {
    let i = 0, j = 0;
    let star = -1, last = 0;

    while (i < s.length) {
        if (j < p.length && (p[j] === s[i] || p[j] === '?')) {

            i++;
            j++;
        } else if (j < p.length && p[j] === '*') {

            star = j;
            last = i;
            j++;
        } else if (star !== -1) {

            j = star + 1;
            last++;
            i = last;
        } else
            return (false);
    }
    
    while (j < p.length && p[j] === '*')
        j++;

    return (j === p.length);
};
