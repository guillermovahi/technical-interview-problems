const convert = require('./main');

const cases = {
	1: { s: 'PAYPALISHIRING', numRows: 3, expected: 'PAHNAPLSIIGYIR' },
	2: { s: 'PAYPALISHIRING', numRows: 4, expected: 'PINALSIGYAHRPI' },
	3: { s: 'A', numRows: 1, expected: 'A' },
}

describe('twoSum', () => {

	for (let [key, value] of Object.entries(cases)) {
		test(`s = [${value.s}], numRows = ${value.numRows} | expected = [${value.expected}]`, () => {
			expect(convert(value.s, value.numRows)).toEqual(value.expected);
		});
	}

  });