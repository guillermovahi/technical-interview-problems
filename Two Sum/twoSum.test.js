const twoSum = require('./twoSum');

const cases = {
	1: { nums: [2, 7, 11, 15], target: 9, expected: [0, 1] },
	2: { nums: [3, 2, 4], target: 6, expected: [1, 2] },
	3: { nums: [3, 3], target: 6, expected: [0, 1] },
	4: { nums: [1, 2, 3], target: 7, expected: null }
}

describe('twoSum', () => {

	for (let [key, value] of Object.entries(cases)) {
		test(`nums = [${value.nums}], target = ${value.target} | expected = [${value.expected}]`, () => {
			expect(twoSum(value.nums, value.target)).toEqual(value.expected);
		});
	}

  });