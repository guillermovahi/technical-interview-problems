/**
 * @param {string[]} strs
 * @return {string}
 */
/* var longestCommonPrefix = function(strs) {
	if (strs.length === 0) return "";
	if (strs.length === 1) return strs[0];
	let prefix = strs[0];
	for (let i = 1; i < strs.length; i++) {
		while (strs[i].indexOf(prefix) !== 0) {
			prefix = prefix.substring(0, prefix.length - 1);
			if (prefix === "") return "";
		}
	}
	return prefix;
}; */

function longestCommonPrefix(strs) {
    if (strs === null || strs.length === 0) {
        return "";
    }
    return longestCommonPrefixHelper(strs, 0, strs.length - 1);
}

function longestCommonPrefixHelper(strs, l, r) {
    if (l === r) {
        return strs[l];
    } else {
        let mid = Math.floor((l + r) / 2);
        let lcpLeft = longestCommonPrefixHelper(strs, l, mid);
        let lcpRight = longestCommonPrefixHelper(strs, mid + 1, r);
        return commonPrefix(lcpLeft, lcpRight);
    }
}

function commonPrefix(left, right) {
    let min = Math.min(left.length, right.length);
    for (let i = 0; i < min; i++) {
        if (left.charAt(i) !== right.charAt(i)) {
            return left.substring(0, i);
        }
    }
    return left.substring(0, min);
}

module.exports = longestCommonPrefix;