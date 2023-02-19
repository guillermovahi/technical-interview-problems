const addTwoNumbers = require('./main')
function ListNode(val, next) {
    this.val = (val===undefined ? 0 : val)
    this.next = (next===undefined ? null : next)
}

function createLinkedListFromArray(arr) {
	let dummy = new ListNode();
	let currentNode = dummy;

	for (let i = 0; i < arr.length; i++) {
		let newNode = new ListNode(arr[i]);
		currentNode.next = newNode;
		currentNode = newNode;
	}

	return dummy.next;
}

const list1 = [2, 4, 3];
const list2 = [5, 6, 4];
const list12 = [7, 0, 8];
const list3 = [0];
const list4 = [0];
const list34 = [0];
const list5 = [9, 9, 9, 9, 9, 9, 9];
const list6 = [9, 9, 9, 9];
const list56 = [8, 9, 9, 9, 0, 0, 0, 1];

let l1 = createLinkedListFromArray([2, 4, 3]);
let l2 = createLinkedListFromArray([5, 6, 4]);
let l12 = createLinkedListFromArray([7, 0, 8]);

let l3 = createLinkedListFromArray([0]);
let l4 = createLinkedListFromArray([0]);
let l34 = createLinkedListFromArray([0]);

let l5 = createLinkedListFromArray([9, 9, 9, 9, 9, 9, 9]);
let l6 = createLinkedListFromArray([9, 9, 9, 9]);
let l56 = createLinkedListFromArray([8, 9, 9, 9, 0, 0, 0, 1]);


const cases = {
	1: { l1: l1, list1: list1, l2: l2, list2: list2, expected: l12, listExpected: list12},
	2: { l1: l3, list1: list3, l2: l4, list2: list4, expected: l34, listExpected: list34},
	3: { l1: l5, list1: list5, l2: l6, list2: list6, expected: l56, listExpected: list56},
}

describe('twoSum', () => {

	for (let [key, value] of Object.entries(cases)) {
		test(`l1 = [${value.list1}], l2 = [${value.list2}] | expected = [${value.listExpected}]`, () => {
			expect(addTwoNumbers(value.l1, value.l2)).toEqual(value.expected);
		});
	}

  });