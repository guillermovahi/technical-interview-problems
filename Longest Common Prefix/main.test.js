const longestCommonPrefix = require('./main');

const cases = {
	1: { strs: ["flower","flow","flight"], expected: "fl" },
	2: { strs: ["dog","racecar","car"], expected: "" }
}

describe('twoSum', () => {

	for (let [key, value] of Object.entries(cases)) {
		test(`strs = [${value.strs}] | expected = "${value.expected}"`, () => {
			expect(longestCommonPrefix(value.strs)).toEqual(value.expected);
		});
	}

  });